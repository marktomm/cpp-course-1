<h2>Week1.Day1 Practical: Hands-On with C++ STANDARD Data Types and <code>string</code></h2>

<hr>

<h3>Exercise 1: Working with Basic Data Types (5 minutes)</h3>
<p>Create variables of different standard data types and print their values.</p>

<h4>Task:</h4>
<ul>
  <li>Create an integer variable and initialize it with your age.</li>
  <li>Create a double variable and initialize it with the value of Pi.</li>
  <li>Create a character variable and initialize it with the initial letter of your name.</li>
</ul>

<h4>Sample Solution:</h4>
<pre><code>int age = 25;
double pi = 3.14159;
char initial = 'J';
cout << "Age: " << age << "\nPi: " << pi << "\nInitial: " << initial << endl;
</code></pre>

<hr>

<h3>Exercise 2: Exploring <code>string</code> (15 minutes)</h3>
<p>Deeply explore the functionalities of <code>string</code> through hands-on tasks.</p>

<h4>Task 1: String Initialization and Concatenation</h4>
<ul>
  <li>Create a string for your first name and last name.</li>
  <li>Concatenate them to form the full name.</li>
</ul>
<h4>Sample Solution:</h4>
<pre><code>string firstName = "John";
string lastName = "Doe";
string fullName = firstName + " " + lastName;
cout << "Full Name: " << fullName << endl;
</code></pre>

<h4>Task 2: Substring Finding and Replacement</h4>
<ul>
  <li>Find a substring within your full name.</li>
  <li>Replace the found substring with another string.</li>
</ul>
<h4>Sample Solution:</h4>
<pre><code>size_t pos = fullName.find("Doe");
fullName.replace(pos, 3, "Smith");
cout << "Updated Full Name: " << fullName << endl;
</code></pre>

<h4>Task 3: String Insertion and Erasure</h4>
<ul>
  <li>Insert a middle name into your full name.</li>
  <li>Erase the first name from the full name.</li>
</ul>
<h4>Sample Solution:</h4>
<pre><code>fullName.insert(5, "F.");
fullName.erase(0, 5);
cout << "Final Full Name: " << fullName << endl;
</code></pre>

<h4>Task 4: Accessing, Querying, and Comparing Strings</h4>
<ul>
  <li>Access the individual characters of a string.</li>
  <li>Get the length of the string.</li>
  <li>Compare two strings for equality.</li>
</ul>
<h4>Sample Solution:</h4>
<pre><code>char firstChar = fullName[0];
size_t length = fullName.length();
bool isEqual = (fullName == "John F. Smith");
cout << "First Character: " << firstChar << "\nLength: " << length << "\nIs Equal: " << isEqual << endl;
</code></pre>

<hr>
