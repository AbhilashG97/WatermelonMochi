'use strict'

// Question One
let today = new Date();
let date = today.getFullYear()+'-'+(today.getMonth()+1)+'-'+today.getDate();
let time = today.getHours() + ":" + today.getMinutes() + ":" + today.getSeconds();

document.getElementById("day").innerHTML = `Today is : ${date}`; 
document.getElementById("time").innerHTML = `Current time is : ${time}`;

// Question Two

/**
 * This function checks whether the first character in the
 * input string is in Uppercase or not
 * @param {string} input - The input string
 */
function isCharUppercase(input) {
    let char = input.charAt(0);
    return /[A-Z]|[\u0080-\u024F]/.test(char) && char === char.toUpperCase(); 
}

let input = prompt("Enter a string", "");
(input === null || input === "") ? alert("You didn't enter anything :(") 
: alert(`Is the first character of ${input} in Uppercase? => ${isCharUppercase("Watermelon")}`);

// Question Three

let eMail = prompt("Enter e-mail address", "");
let regex = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
alert(`Is the entered e-mail Address valid? => ${regex.test(eMail.toLowerCase())}`);

// Question four

function bubbleSort(array) {
    for(let i=0; i<array.length-1; i++) {
        for (let j=0; j<array.length-i-1; j++) {
            if(array[j] > array[j+1]) {
                let temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return array;
}

let inputArray = [6, 4, 0, 3, -2, 1];
let result = bubbleSort(inputArray);

alert(`The input array ${inputArray} after sorting is ${result}`);

document.getElementById("bubbleSort").innerHTML = `The input array ${inputArray} after sorting is ${result}`;

// Question 5
/**
 * A function that checks whether a given IP Address is valid or not
 * @param {String} ipAddress 
 */
function isIPAddress(ipAddress){
    return /^(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$/.test(ipAddress);
}

/**
 * This function is a event lister for a button.
 */
function checkIPAddress(){
    let ipAddress = document.getElementById("addressField").value;
    if(isIPAddress(ipAddress)) {
        alert("This is a valid IP Address.");
    } else {
        alert("Ah oh, something is wrong.");
    }
}

/**
 * This function is also an event listener which clears the input field
 * when called.
 */
function clearField() {
    document.getElementById("addressField").value= "";
}

// Question 6

let student  = {
    name : "Watermelon",
    sclass: "S7 CSE A",
    rollno : 2,
};

/**
 * This function shows the properties of the provided object
 * @param {Object} object 
 */
function showObject(object) {
    for(let key in object) {
        alert(`Key : ${key} | Value : ${object[key]}`);
    }
}

showObject(student);

/**
 * This function deletes the property of the given object. 
 * @param {Object} object 
 * @param {String} property 
 */
function deleteProperty(object, property) {
    if (property in object) {
        delete object[property];
    } else {
        alert("ah oh, something's wrong!");
    }
}

alert("AFTER DELETEING THE ROLL NUMBER PROPERTY");

deleteProperty(student, "rollno");

showObject(student);

// Question 7 & 8

// Please view the folders - QuestionA and QuestionB