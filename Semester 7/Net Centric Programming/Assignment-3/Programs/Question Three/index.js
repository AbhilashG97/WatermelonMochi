'use strict'

let customer = {
    username : "",
    phoneNumber : "",
    email : "",
    taxiType : "",
    pickupDateAndTime : "",
    pickUpPlace : "",
    dropOffPlace : "",
    specialInstructions : "",
};

/**
 * This function gets all the values 
 * from various fields and assigns them 
 * to an object
 */
function onSubmitButtonPressed() {

    customer.username = $('#userNameField').val();
    customer.phoneNumber = $('#phoneNumberField').val();
    customer.email = $('#emailField').val();
    customer.taxiType = $("input[name='taxiType']:checked").val();
    customer.pickupDateAndTime = $('#dateTimeField').val();
    customer.pickUpPlace = $('#pickUp option:selected').text();
    customer.dropOffPlace = $('#dropOff option:selected').text();
    customer.specialInstructions = $('#instructionsTextarea').val();

    alert("Form submitted successfully!");
}