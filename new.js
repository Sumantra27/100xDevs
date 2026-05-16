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

let sum = 0;

for (let i = 0; i < 1000000000000; i++) {
    sum = sum + i;
}

console.log(sum);

