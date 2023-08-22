<h2>Practice Task Descriptions</h2>

<hr>

<h3>1. Basic String Manipulations:</h3>
<p>You'll be working with basic string operations, such as concatenation, transformation to uppercase/lowercase, and reversal.</p>

<ul>
  <li>Initialize a string named <code>message</code> with the value: "Hello, World!". (<code>std::string</code>)</li>
  <li>Convert the <code>message</code> string to uppercase and then to lowercase. (<code>std::transform</code>)</li>
  <li>Reverse the <code>message</code> string. (<code>std::reverse</code>)</li>
</ul>

<h3>2. String Length Calculation:</h3>
<p>You'll manually calculate the length of a string without using the <code>length</code> function.</p>

<ul>
  <li>Find the length of the <code>message</code> string and store it in an integer variable <code>len</code>.</li>
</ul>

<h3>3. Working with C++ Containers:</h3>
<p>You'll experiment with C++ containers like <code>std::vector</code> and <code>std::map</code>.</p>

<ul>
  <li>Create a <code>vector</code> and add elements to it.</li>
  <li>Create a <code>map</code> to store key-value pairs.</li>
  <li>Access elements and iterate through the containers.</li>
</ul>

<h3>4. Understanding Boolean Types:</h3>
<p>Explore the boolean data type and conditional expressions.</p>

<ul>
  <li>Create and initialize a boolean variable.</li>
  <li>Use conditional expressions to make decisions.</li>
</ul>

<hr>

<h3>Answers:</h3>

<hr>

<pre><code>// Basic String Manipulations:
std::string message = "Hello, World!";
std::transform(message.begin(), message.end(), message.begin(), ::toupper); // Uppercase
std::transform(message.begin(), message.end(), message.begin(), ::tolower); // Lowercase
std::reverse(message.begin(), message.end()); // Reverse
</code></pre>

<hr>

<pre><code>// String Length Calculation:
int len = 0;
while (message[len] != '\0') len++;
// Result: 'len' will be the length of the message string.
</code></pre>

<hr>

<pre><code>// Working with C++ Containers:
std::vector<int> numbers = {10, 20, 30};
numbers.push_back(40); // Adding to the vector
std::map<std::string, int> ages;
ages["John"] = 25;
ages["Jane"] = 30;
// Iterating and accessing elements
</code></pre>

<hr>

<pre><code>// Understanding Boolean Types:
bool isAdult = true;
if (isAdult) {
    std::cout << "You are an adult." << std::endl;
} else {
    std::cout << "You are not an adult." << std::endl;
}
</code></pre>

<hr>
