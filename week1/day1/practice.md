<h2>Practice Task Descriptions</h2>
<hr>

<h3>1. Basic String Concatenation:</h3>
<p>You'll be practicing basic string concatenation in this task.</p>
<ul>
  <li>Initialize two strings named <code>firstName</code> and <code>lastName</code>.</li>
  <li>Concatenate them with a space in between and store the result in a string variable named <code>fullName</code>.</li>
</ul>
<hr>

<h3>2. Substring Extraction:</h3>
<p>Extract a specific substring from a given string.</p>
<ul>
  <li>Initialize a string named <code>content</code> with the value: "C++ Programming Language".</li>
  <li>Use the <code>substr</code> method to extract the word "Programming" and store it in a string variable named <code>subContent</code>.</li>
</ul>
<hr>

<h3>3. Finding a Character:</h3>
<p>Find the first occurrence of a specific character within a string.</p>
<ul>
  <li>Initialize a string named <code>text</code> with the value: "Welcome to the world of C++".</li>
  <li>Use the <code>find</code> method to locate the first occurrence of the character 'o' and store the result in a variable named <code>position</code>.</li>
</ul>
<hr>

<h3>4. Replace Substring:</h3>
<p>Replace a specific substring within a given string.</p>
<ul>
  <li>Initialize a string named <code>sentence</code> with the value: "I love cats".</li>
  <li>Use the <code>replace</code> method to change the word "cats" to "dogs" in the <code>sentence</code> string.</li>
</ul>
<hr>

<h3>5. Convert String to Uppercase:</h3>
<p>Convert the entire content of a string to uppercase.</p>
<ul>
  <li>Initialize a string named <code>text</code> with the value: "Learning C++".</li>
  <li>Convert the entire string to uppercase.</li>
</ul>
<hr>

<h3>6. String Length:</h3>
<p>Find the length of a given string.</p>
<ul>
  <li>Initialize a string named <code>message</code> with the value: "Welcome!".</li>
  <li>Retrieve the length of the string and store it in a variable named <code>length</code>.</li>
</ul>
<hr>

<h3>7. Reverse String:</h3>
<p>Reverse the content of a given string.</p>
<ul>
  <li>Initialize a string named <code>original</code> with the value: "C++ is Fun".</li>
  <li>Reverse the content of the string.</li>
</ul>
<hr>

<h3>8. Insert Substring:</h3>
<p>Insert a substring into a given position within a string.</p>
<ul>
  <li>Initialize a string named <code>text</code> with the value: "C++ is powerful".</li>
  <li>Insert the substring " and easy" at the end of the string.</li>
</ul>
<hr>

<h3>9. Erase Substring:</h3>
<p>Erase a specific substring from a given string.</p>
<ul>
  <li>Initialize a string named <code>sentence</code> with the value: "C++ is hard but rewarding".</li>
  <li>Erase the substring " hard" from the string.</li>
</ul>
<hr>

<h3>10. Compare Strings:</h3>
<p>Compare two given strings to check if they are equal.</p>
<ul>
  <li>Initialize two strings named <code>str1</code> and <code>str2</code> with the values: "C++" and "C++".</li>
  <li>Compare the two strings and store the result in a boolean variable named <code>isEqual</code>.</li>
</ul>
<hr>

<h2>Answers:</h2>
<pre><code>// Task 1:
std::string firstName = "John";
std::string lastName = "Doe";
std::string fullName = firstName + " " + lastName;

// Task 2:
std::string content = "C++ Programming Language";
std::string subContent = content.substr(3, 11);

// Task 3:
std::string text = "Welcome to the world of C++";
size_t position = text.find('o');

// Task 4:
std::string sentence = "I love cats";
sentence.replace(sentence.find("cats"), 4, "dogs");

// Task 5:
std::string text = "Learning C++";
std::transform(text.begin(), text.end(), text.begin(), ::toupper);

// Task 6:
std::string message = "Welcome!";
size_t length = message.length();

// Task 7:
std::string original = "C++ is Fun";
std::reverse(original.begin(), original.end());

// Task 8:
std::string text = "C++ is powerful";
text.insert(text.size(), " and easy");

// Task 9:
std::string sentence = "C++ is hard but rewarding";
sentence.erase(sentence.find(" hard"), 5);

// Task 10:
std::string str1 = "C++";
std::string str2 = "C++";
bool isEqual = (str1 == str2);
</code></pre>
