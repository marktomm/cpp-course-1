<h2>Week1.Day1 Theory: Dive into C++ with STANDARD Data Types and <code>string</code></h2>

<hr>

<h3>Basic Structure of a C++ Program (1 minute):</h3>
<p>Every C++ program begins with the <code>main</code> function. The code within this function is executed first, forming the core of the program. Returning <code>0</code> signifies successful execution.</p>

<hr>

<h3>Variables and STANDARD Data Types (8 minutes):</h3>
<p>C++ provides a rich set of data types that allow developers to handle various types of data.</p>

<p>When we talk about data types, we focus on three main things: how big they are, what actions you can do with them, and what values they can hold.</p>

<ul>
  <li>Size: Determines how big the data types are.</li>
  <li>Permissible Operations: Defines what actions can be performed with the data types.</li>
  <li>Valid Value Range: Specifies what values the data types can hold.</li>
</ul>

<h4>Integers (<code>int</code>):</h4>
<ul>
  <li><strong>Size:</strong> Typically 4 bytes, can vary depending on the platform.</li>
  <li><strong>Operations:</strong> Supports basic arithmetic such as addition, subtraction, etc.</li>
  <li><strong>Values:</strong> Range from roughly -2 billion to 2 billion.</li>
</ul>
<pre><code>int age = 30;
</code></pre>

<h4>Floating-Point Numbers (<code>double</code>):</h4>
<ul>
  <li><strong>Size:</strong> Generally 8 bytes.</li>
  <li><strong>Operations:</strong> Handles floating point arithmetic operations.</li>
  <li><strong>Values:</strong> Can store large or small floating point numbers.</li>
</ul>
<pre><code>double pi = 3.14;
</code></pre>

<h4>Characters (<code>char</code>):</h4>
<ul>
  <li><strong>Size:</strong> Usually 1 byte.</li>
  <li><strong>Operations:</strong> Used for comparisons and assignments.</li>
  <li><strong>Values:</strong> Includes ASCII characters, letters, and symbols.</li>
</ul>
<pre><code>char initial = 'A';
</code></pre>

<h4>Strings (<code>string</code>):</h4>
<ul>
  <li><strong>Size:</strong> Depends on the content length.</li>
  <li><strong>Operations:</strong> Provides methods for concatenation, insertion, deletion, and more.</li>
  <li><strong>Values:</strong> A collection of characters.</li>
</ul>
<pre><code>string greeting = "Hello, World!";
</code></pre>

<hr>

<h3>Deep Dive into <code>string</code> (10 minutes):</h3>
<p><code>string</code> is an essential part of C++, allowing developers to manipulate text. Here we will explore key functions and capabilities.</p>

<h4>Creating and Initializing:</h4>
<ul>
  <li><strong>Basic Initialization:</strong></li>
</ul>
<pre><code>string name = "Alice";
</code></pre>
<ul>
  <li><strong>Concatenation (Adding Strings Together):</strong></li>
</ul>
<pre><code>string fullName = name + " Johnson";
</code></pre>

<h4>Manipulating Strings:</h4>
<ul>
  <li><strong>Finding Substrings:</strong></li>
</ul>
<pre><code>size_t pos = fullName.find("Johnson");
</code></pre>
<ul>
  <li><strong>Replacing Substrings:</strong></li>
</ul>
<pre><code>fullName.replace(pos, 7, "Smith");
</code></pre>
<ul>
  <li><strong>Inserting and Erasing Characters:</strong></li>
</ul>
<pre><code>fullName.insert(5, " Ms.");
fullName.erase(0, 5);
</code></pre>

<h4>Accessing and Querying Strings:</h4>
<ul>
  <li><strong>Accessing Individual Characters:</strong></li>
</ul>
<pre><code>char firstChar = fullName[0];
</code></pre>
<ul>
  <li><strong>Obtaining String Length:</strong></li>
</ul>
<pre><code>size_t length = fullName.length();
</code></pre>
<ul>
  <li><strong>Comparing Strings:</strong></li>
</ul>
<pre><code>bool isEqual = (fullName == "Alice Ms. Johnson");
</code></pre>
<p>These capabilities of <code>string</code> provide powerful tools for string manipulation, and they underline why understanding this class is essential for a new C++ learner.</p>

<hr>

<h2>Using string::find</h2>

<p>The <code>string::find</code> method is a powerful tool for searching within a string. It looks for a specified substring or character and returns the position of the first occurrence. If the substring or character is not found, it returns <code>string::npos</code>.</p>

<h3>Syntax</h3>
<pre><code>size_t string::find(const string&amp; str, size_t pos = 0) const;</code></pre>

<ul>
  <li><code>str</code>: The substring to search for.</li>
  <li><code>pos</code>: The starting position in the string to begin searching from. The default value is 0.</li>
</ul>

<h3>Example</h3>
<pre><code>string text = "The quick brown fox jumps over the lazy dog.";
size_t position = text.find("fox");
if (position != string::npos) {
  cout << "'fox' found at position: " << position << endl;
} else {
  cout << "'fox' not found." << endl;
}
</code></pre>

<p>In this example, the <code>find</code> method locates the substring "fox" within the larger string and prints the position. If the substring is not found, it prints a message indicating that the substring was not found.</p>

<hr>

