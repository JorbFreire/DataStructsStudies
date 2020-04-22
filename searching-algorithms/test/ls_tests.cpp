#include <gtest/gtest.h>
#include "../include/searching.h"
#include <iterator>
#include <algorithm>
#include <random>

using namespace sa;

TEST(lsearch, DISABLED_basic)
{
    value_type A[]{ 1, 2, 3, 4, 5, 6, 7 };
    std::random_device rd;
    std::shuffle(std::begin(A), std::end(A), rd);
    //std::copy( std::begin(A), std::end(A), std::ostream_iterator<int>(std::cout, " ") );

    // Looking for each element from A in A.
    for ( const auto & e : A )
    {
        auto result = lsearch( std::begin(A), std::end(A), e );
        EXPECT_EQ( *result, e );
    }
}

TEST(lsearch, DISABLED_no_present_to_left)
{
    value_type A[]{ 1, 2, 3, 4, 5, 6, 7 };
    std::random_device rd;
    std::shuffle(std::begin(A), std::end(A), rd);

    auto target{-4};
    auto result = lsearch( std::begin(A), std::end(A), target );
    EXPECT_EQ( result, std::end(A) );
}

TEST(lsearch, DISABLED_not_present_to_right)
{
    value_type A[]{ 1, 2, 3, 4, 5, 6, 7 };
    std::random_device rd;
    std::shuffle(std::begin(A), std::end(A), rd);

    auto target{10};
    auto result = lsearch( std::begin(A), std::end(A), target );
    EXPECT_EQ( result, std::end(A) );
}

TEST(lsearch, DISABLED_no_present_in_between)
{
    value_type A[]{ 1, 3, 5, 7, 9, 11 };
    std::random_device rd;
    std::shuffle(std::begin(A), std::end(A), rd);

    for ( auto i{2} ; i < 11 ; i+=2 )
    {
        auto result = lsearch( std::begin(A), std::end(A), i );
        EXPECT_EQ( result, std::end(A) );
    }
}

TEST(lsearch, DISABLED_empty_range)
{
    value_type A[]{ 1, 3, 5, 7, 9, 11 };

    // Let us simulate an empty range here.
    auto first = std::begin(A);
    auto last = std::begin(A);
    auto result = lsearch( first, last, 10 );
    EXPECT_EQ( result, last );
}

