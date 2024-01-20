// Create a Promise
const myPromise1 = new Promise((resolve, reject) => {
  setTimeout(resolve, 200, "King");
});

// Create another Promise
const myPromise2 = new Promise((resolve, reject) => {
  setTimeout(resolve, 100, "Queen");
});

// Run when any promise fulfill
Promise.any([myPromise1, myPromise2]).then((x) => {
  myDisplay(x);
});