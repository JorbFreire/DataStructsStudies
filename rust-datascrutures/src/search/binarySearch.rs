fn binarySearch(array: [i32], targetNumber: i32) -> i32 | Null {
  let mut begin: i32 = 0;
  let mut end: i32 = array.len() - 1;
  
  loop {
    let mut middle: i32 = end / 2;

    if targetNumber == array[middle] {
      array[middle]
    } else if targetNumber < array[middle] {
      begin = middle
    } else {
      end = middle
    }
  }
}
