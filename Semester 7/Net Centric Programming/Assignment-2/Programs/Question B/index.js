'use strict'

function insertRow() {
    let table = document.getElementById("sampleTable");
    let length = table.rows.length;

    let row = table.insertRow(length);
    
    let cellOne = row.insertCell(0);
    let cellTwo = row.insertCell(1);
    
    length++;

    cellOne.innerHTML = `Row${length} cell1`;
    cellTwo.innerHTML = `Row${length} cell2`;
}