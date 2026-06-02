// let firasName = "Sumantra";
// let age = 23;
// let isMarried = false;

// ////
// if (isMarried == false){
//     console.log(firasName + " is not married.")
// } else {
//     console.log(firasName + " is married.")
// } 

// let answer = 0;

// for (let i = 0; i <= 100; i = i + 1) {
//     answer = answer + i;
// }

// console.log(answer);


// const ages = [21,22,23,24,25];
// for (let i = 0; i < ages.length; i++) {
//     if (ages[i] % 2 == 0) {
//         console.log(ages[i]);
//     }
// }

// const person1 = "Sumantra";
// const gender1 = "male";


// print name if male

// const personArray = ["Sumantra", "Amit", "Priya"]
// const genderArray = ["male", "male", "female"]

// for  (let i = 0; i <personArray.length; i++) {
//         if (genderArray[i] == "male") {
//             console.log(personArray[i])
//         }
// }

//print name if male, better was => as object.

// const allUsers = [{
//     firstName : "Sumantra",
//     gender : "male"
// },
// {
//     firstName : "Kumar",
//     gender : "male"
// },
// {
//     firstName : "priya",
//     gender : "female",
//     // example --> metadata : {
//     //     age : 23,
//     //     address : "XYZ Road 01"
//     // }
// }]

// for  (let i = 0; i <allUsers.length; i++) {
//     if (allUsers[i]["gender"] == "male") {
//         console.log(allUsers[i]["firstName"])  // the more nested it is the more complex it gets 
//     }                                          // example --> console.log(allUsers[i]["metadata"]["age"] == something)
// }

// function sum(a, b){
//     const sumValue = a + b;
//     return sumValue;
// }

// const value = sum(1, 2)
// const value2 = sum(10, 2)
// console.log(value);
// console.log(value2);

// let sum = 0;

// for (let i = 0; i < 10000000000000; i++) {
//     sum = sum + i;
// }

// console.log(sum);

// function sum(num1, num2, fnToCall) {
//     let result = num1 + num2;
//     //return result;
//     fnToCall(result);
// }
// function displayResult(data) {
//     console.log("Result of the sum is:" +data); 
// }
// function displayResultPassive(data) {
//     console.log("Sum's result is:" +data); 
// }
// const ans = sum(1,2, displayResultPassive);

// const user = {
//     name : "Sumantra",
//     age : 23,
//     address: {
//         houseNumber: "11A",
//         streat: 1

//     }
// }

// console.log(user["address"]["houseNumber"])
// ///////

// slice
// function getSlice(str, start, end) {
//   console.log("Original String:", str);
//   console.log("After slice:", str.slice(start, end));
// }
// getSlice("Hello World", 0, 5);

// const initialArray = [1, 2, 3];
// const secondArray = [4, 5, 6];
// const finalArray = initialArray.concat(secondArray);

// console.log(finalArray)

// function dateMethods() {
//   const currentDate = new Date();
//   console.log("Current Date:", currentDate);

//   // Getting various components of the date
//   console.log("Date:", currentDate.getDate());
//   console.log("Month:", currentDate.getMonth() + 1); // Months are zero-indexed, so adding 1
//   console.log("Year:", currentDate.getFullYear());
//   console.log("Hours:", currentDate.getHours());
//   console.log("Minutes:", currentDate.getMinutes());
//   console.log("Seconds:", currentDate.getSeconds());

//   // Setting components of the date
//   currentDate.setFullYear(2022);
//   console.log("After setFullYear:", currentDate);

//   currentDate.setMonth(5); // Setting month to June (zero-indexed)
//   console.log("After setMonth:", currentDate);

//   // Getting and setting time in milliseconds since 1970
//   console.log("Time in milliseconds since 1970:", currentDate.getTime());

//   const newDate = new Date(2023, 8, 15); // Creating a new date
//   console.log("New Date:", newDate);
// }

// // Example Usage for Date Methods
// dateMethods();

// Object Methods Explanation


// function objectMethods(obj) {
//   console.log("Original Object:", obj);

//   let keys = Object.keys(obj);
//   console.log("After Object.keys():", keys);

//   let values = Object.values(obj);
//   console.log("After Object.values():", values);

//   let entries = Object.entries(obj);
//   console.log("After Object.entries():", entries);

//   let hasProp = obj.hasOwnProperty("property");
//   console.log("After hasOwnProperty():", hasProp);

//   let newObj = Object.assign({}, obj, { newProperty: "newValue" });
//   console.log("After Object.assign():", newObj);
// }
// // Example Usage for Object Methods
// const sampleObject = {
//   key1: "value1",
//   key2: "value2",
//   key3: "value3",
// };

// objectMethods(sampleObject);

//////////

// function square(n) {
//   return n * n ;
// }

// function cube(n) {
//   return n * n * n ;
// }

// function squareOfSum(a,b) {
//   const num1 = square(a)
//   const num2 = square(b)
//   return num1 + num2 ;
// }

// function cubeOfSum(a,b) {
//   const num1 = cube(a)
//   const num2 = cube(b)
//   return num1 + num2 ;
// }

// function sumOfSomething(a ,b , fn) {
//   const num1 = fn(a)
//   const num2 = fn(b)
//   return num1 + num2 ;
// }

// //const ans1 = squareOfSum(8,6);
// console.log(sumOfSomething(6, 8, square));

// //const ans2 = cubeOfSum(8,6);
// console.log(sumOfSomething( 6, 8, cube));

//********/

// const fs = require("fs"); //fs  - filesystem module

// fs.readFile("a.txt", "utf-8", function(err, data) {
//   console.log(data);
// } )

// console.log("Hi there.");

// let a = 0;
// for(let i = 0; i < 1000000000; i++){
//   a++;
// }

// console.log("Hi there.!!");

// //////////////// promise

// const fs = require('fs');

// // my own asynchronous, funct ton
// function kiratsReadFile(){
//   return new Promise(function(resolve) {
//     fs.readFile("a.txt", "utf-8", function(err, data) {
//       resolve(data);
//     });
//   })
// }
// // callback function to call
// function onDone(data) {
//   console.log(data)
// }
//  kiratsReadFile().then(onDone);


//////////

// const fs = require("fs");

// function putCopyrightToFile(cb) {
//   fs.readFile("a.txt", "utf-8", function(err, data) {
//   data = data + "\ncopyright 2026 SUMANTRA";
//   fs.writeFile("a.txt",data, function () {
//     cb();
//   })
// });
// }

// putCopyrightToFile( function() {
//   console.log("Copyright has been put.")
// })

/////

// const fs = require("fs");

// function putCopyrightToFile(cb) {
//   fs.readFile("a.txt", "utf-8", function(err, data) {

//     data = data + "\nCopyright 2026 SUMANTRA";

//     fs.writeFile("a.txt", data, function(err) {
//       if (err) {
//         console.log(err);
//         return;
//       }

//       cb();
//     });

//   });
// }

// putCopyrightToFile(function() {
//   console.log("Copyright has been put.");
// });

//
console.log("one");
console.log("two");

 setTimeout( () => {
  console.log("hello")
 }, 2000);

console.log("three");
console.log("four");