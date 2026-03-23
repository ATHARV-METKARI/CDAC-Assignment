import React, { useState } from "react";

function IsPalindrome() {
  let [number, setNumber] = useState("");
  let [result, setResult] = useState("");

  let checkPalindrome = () => {
    let temp = parseInt(number); 
    let original = temp;
    let sum = 0;
    let res;

    while (temp > 0) {
      res = temp % 10;
      sum = (sum * 10) + res;
      temp = Math.floor(temp / 10);
    }

    if (sum === original) {
      setResult(`${number} is a Palindrome`);
    } else {
      setResult(`${number} is NOT a Palindrome`);
    }
  };

  return (
    <div style={{ textAlign: "center", marginTop: "50px" }}>
      <h2>Palindrome Checker</h2>

      <input
        type="number"
        value={number}
        onChange={(e) => setNumber(e.target.value)}
      />

      <br /><br />

      <button onClick={checkPalindrome}>Check</button>

      <h3>{result}</h3>
    </div>
  );
}

export default IsPalindrome;