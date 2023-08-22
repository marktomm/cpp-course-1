<h2>Week1.Day1 Theory: Dive into C++ with STANDARD Data Types and <code>std::string</code></h2>

<hr>

<h3>Basic Structure of a C++ Program (1 minute):</h3>
<p>Every C++ program begins with the <code>main</code> function. The code within this function is executed first, forming the core of the program. Returning <code>0</code> signifies successful execution.</p>

<hr>

<h3>Variables and STANDARD Data Types (8 minutes):</h3>
<p>C++ provides a rich set of data types that allow developers to handle various types of data.</p>

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
  <li><strong>Operations:</strong> Handles decimal arithmetic operations.</li>
  <li><strong>Values:</strong> Can store large or small decimal numbers.</li>
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

<h4>Strings (<code>std::string</code>):</h4>
<ul>
  <li><strong>Size:</strong> Depends on the content length.</li>
  <li><strong>Operations:</strong> Provides methods for concatenation, insertion, deletion, and more.</li>
  <li><strong>Values:</strong> A collection of characters.</li>
</ul>
<pre><code>std::string greeting = "Hello, World!";
</code></pre>

<hr>

<h3>Deep Dive into <code>std::string</code> (10 minutes):</h3>
<p><code>std::string</code> is an essential part of C++, allowing developers to manipulate text. Here we will explore key functions and capabilities.</p>

<h4>Creating and Initializing:</h4>
<ul>
  <li><strong>Basic Initialization:</strong></li>
</ul>
<pre><code>std::string name = "Alice";
</code></pre>
<ul>
  <li><strong>Concatenation (Adding Strings Together):</strong></li>
</ul>
<pre><code>std::string fullName = name + " Johnson";
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
<p>These capabilities of <code>std::string</code> provide powerful tools for string manipulation, and they underline why understanding this class is essential for a new C++ learner.</p>

<hr>
