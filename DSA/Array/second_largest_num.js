let arr = [ 1, 20, 2, 9 ];

function result(array) {
    let max = 0;
    let secondMax = 0;
    array.forEach(item => {
        if (item > max) {
            let temp = max;
            max = item;
            secondMax = temp;
        } else if (item > secondMax) {
            secondMax = item;
        }
    });
    return secondMax;
}

console.log('====================================');
console.log(result(arr));
console.log('====================================');

const secondLargest = arr.sort((a, b) => b - a)[ 1 ]
console.log('====================================');
console.log(secondLargest);
console.log('====================================');