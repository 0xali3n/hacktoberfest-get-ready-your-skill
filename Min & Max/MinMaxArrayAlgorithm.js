/**
 * This function will take an array as a parameter and return its min and max elements.
 */

const findMinAndMax = (array) => {
    //Let's initialize min and max variables
    let min = Math.min(...array);
    let max = Math.max(...array);
    //Output
    return `Min element in the array : ${min} \n Max element in the array : ${max}`
}

/**
 * To test the function
 * console.log(findMinAndMax([1,2,3,4,5]));
 */