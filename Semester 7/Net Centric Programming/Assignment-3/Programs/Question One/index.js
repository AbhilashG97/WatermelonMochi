'use strict'

let PASSWORD = "watermelon"

function changePassword() {
    let oldPassword = document.getElementById("oldPasswordField").value;
    let newPassword = document.getElementById("newPasswordField").value;

    if(oldPassword == "" || newPassword == "") {
        alert("Please enter values into the fields.");
    } else {
        if (oldPassword === PASSWORD) {

            let passwordRegex = /^(?=.*[0-9])(?=.*[!@#$%^&*])(?=.*[A-Z])[a-zA-Z0-9!@#$%^&*]{6,12}$/;
           
            if(passwordRegex.test(newPassword)) {
                PASSWORD = newPassword;
                alert("Password changed successfully!");
                document.getElementById("oldPasswordField").value = "";
                document.getElementById("newPasswordField").value = "";
            } else {
                alert("New password is not strong enough!");
                document.getElementById("newPasswordField").value = "";
            }   


        } else {
            alert("You entered the wrong old password :(");
            document.getElementById("oldPasswordField").value = "";
        }
    }
}