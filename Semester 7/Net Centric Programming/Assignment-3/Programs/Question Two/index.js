'use strict'

let user = {
    firstName : "",
    lastName : "",
    gender : "",
    ["food preference"] : "",
    food : "",
    remarks : "",
};

let areNamesValid = [];

const vegetarianFoodItems = ['Food Items','Watermelon Salad', "Apple Orange Custard", "Ceasar Salad"];
const nonVegetarianFoodItems = ['Food Items', 'Butter Chicken', 'Chicken Yum Yum', 'Fish Fry'];

/**
 * This is a helper method which validates the first name 
 * and last name of a user
 * 
 * @param {TextField ID} $textfieldId 
 * @param {regex} regex 
 * @param {HTML Tick ID} $tickID 
 * @param {HTML Cross ID} $crossID 
 * @param {Int} fieldNumber 
 */
function fieldValidation($textfieldId, regex, $tickID, $crossID, fieldNumber) {
    $(document).ready(function () {
        $textfieldId.focusout(function () {
            if (regex.test($(this).val())) {
                $tickID.show();
                $crossID.hide();
                areNamesValid[fieldNumber] = true;
            } else {
                $crossID.show();
                $tickID.hide();
                areNamesValid[fieldNumber] = false;
            }
        });
    });
}

fieldValidation($('#firstNameField'), /^[a-z ,.'-]+$/i, $('#firstNameTick'), $('#firstNameCross'), 0);
fieldValidation($('#lastNameField'), /^[a-z ,.'-]+$/i, $('#lastNameTick'), $('#lastNameCross'), 1);

/**
 * This piece of code populates the drop down items depending 
 * on the values selected by the user in the Food Preferences radio buttons
 */
$("input[name='foodPreference']").change(function(){
    let foodPreference = $("input[name='foodPreference']:checked").val();

    if(foodPreference === 'vegetarian') {
        $('#foodItem').empty();
        $.each(vegetarianFoodItems, function( index, value ) {
            $('#foodItem').append(
                $('<option></option>').val(value).html(value)
            );
        });
    } else {
        $('#foodItem').empty();
        $.each(nonVegetarianFoodItems, function( index, value ) {
            $('#foodItem').append(
                $('<option></option>').val(value).html(value)
            );
        });
    }
});

/**
 * This function adds newlines to a 
 * paragraph 
 */
$.fn.multiline = function(text){
    this.text(text);
    this.html(this.html().replace(/\n/g,'<br/>'));
    return this;
}

/**
 * This function contains all the business logic for 
 * the submit button clicked event
 */
function onSubmitButtonClicked() {
    if(areNamesValid[0] && areNamesValid[1]) {
        user.firstName = $('#firstNameField').val();
        user.lastName = $('#lastNameField').val();
    } else {
        alert("Please enter proper values into the fields");
    }

    let gender = $("input[name='gender']:checked").val();
    if (gender) {
        user.gender = gender;
    } else {
        alert("Please select your gender!");
    }

    let foodPreference = $("input[name='foodPreference']:checked").val();

    if (foodPreference) {
        user["food preference"] = foodPreference;
    } else {
        alert("Please select your food preference!");
    }

    user.food = $('#foodItem option:selected').text();

    user.remarks = $.trim($('#remarksTextArea').val());

    alert("Form has been submitted successfully!(^_^)/");

    $('#result').multiline(`First Name: ${user.firstName}\nLast Name: ${user.lastName}\nGender: ${user.gender}\nFood Preference: ${foodPreference}\nFood Item Selected: ${user.food}`);
}

/**
 * This function clears all fields in the form
 */
function onResetButtonClicked() {
    $('#firstNameField').val("");
    $('#lastNameField').val("");
    $('input[name="gender"]').prop('checked', false);
    $("input[name='foodPreference']").prop('checked', false);
    $('#foodItem').prop('selectedIndex',0);
    $('#remarksTextArea').val('');
    
    $('#firstNameTick').hide();
    $('#lastNameTick').hide();

    $('#firstNameCross').hide();
    $('#lastNameCross').hide();
    $('#result').text('Form summary will be displayed here after clicking the submit button');
}