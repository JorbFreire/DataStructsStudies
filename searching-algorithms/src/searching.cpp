/*
 */

#include "../include/searching.h"

namespace sa {

    /*!
     * Performs a **linear search** for `value` in `[first;last)` and returns a pointer to the location of `value` in the range `[first,last]`, or `last` if no such element is found.
     * \param first Pointer to the begining of the data range.
     * \param last Pointer just past the last element of the data range.
     * \param value The value we are looking for.
     */
    value_type * lsearch( value_type * first, value_type * last, value_type value )
    {
        // TODO: Insert here your solution for the linear search problem.
        std::cout << "lsearch" << std::endl;
        {
            while(first != last){
                if(value == *first){
                    return first;
                    break;
                }
                first++;
            }
            return last; //busca falhou
        }
    }

    /*!
     * Performs a **binary search** for `value` in `[first;last)` and returns a pointer to the location of `value` in the range `[first,last]`, or `last` if no such element is found.
     * \note The range **must** be sorted.
     * \param first Pointer to the begining of the data range.
     * \param last Pointer just past the last element of the data range.
     * \param value The value we are looking for.
     */
    value_type * bsearch( value_type * first, value_type * last, value_type value)
    {
        // TODO: Insert here your solution for the binary search problem.
        int* lastbkp = last;
        while(first != last){
            int size = std::distance(first, last);
            int* midle = first + size/2;
            if(value == *midle){
                return midle;
            }
            if( *midle < value){
                first = midle;
            } 
            if( *midle > value){
                last = midle;
            }
        }
        return lastbkp; //busca falhou
    }

    /*!
     * Returns a pointer to the first element in the range `[first, last)` that is _not less_  than (i.e. greater or equal to) `value`, or `last` if no such element is found.
     * \note The range **must** be sorted.
     * \param first Pointer to the begining of the data range.
     * \param last Pointer just past the last element of the data range.
     * \param value The value we are looking for.
     */
    value_type * lbound( value_type * first, value_type * last, value_type value )
    {
        // TODO: Insert here your solution for the lower bound problem.
        int* kfirst = first;
        int* second = first + 1;
        int* lower = first;
        while(kfirst != last){
            if(second < kfirst){
                lower = second;
            }
            second++;
            kfirst++;
        }
        return lower; // stub, not valid.
    }

    /*!
     * Returns a pointer to the first element in the range `[first, last)` that is _greater_  than `value`, or `last` if no such element is found.
     * \note The range **must** be sorted.
     * \param first Pointer to the begining of the data range.
     * \param last Pointer just past the last element of the data range.
     * \param value The value we are looking for.
     */
    value_type * ubound( value_type * first, value_type * last, value_type value )
    {
        // TODO: Insert here your solution for the upper bound problem.

        return first; // stub, not valid.
    }
}

