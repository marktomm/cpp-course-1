<h2>Week1.Day1 Practice: Additional Hands-On with C++ STANDARD Data Types and <code>std::string</code></h2>

<hr>

<h3>Practice Task 1: Playing with Numeric Types (5 minutes)</h3>
<p>Understanding numeric data types by performing arithmetic operations.</p>

<h4>Task:</h4>
<ul>
  <li>Create and initialize variables of integer, float, and double types.</li>
  <li>Perform addition, subtraction, multiplication, and division.</li>
</ul>

<h4>Sample Solution:</h4>
<pre><code>int i = 10;
float f = 5.5;
double d = 3.3;
cout << "Sum: " << (i + f + d) << "\nDifference: " << (i - f - d) << "\nProduct: " << (i * f * d) << "\nQuotient: " << (i / f / d) << endl;
</code></pre>

<hr>

<h3>Practice Task 2: String Manipulation (10 minutes)</h3>
<p>Experiment with various string operations for a deeper understanding.</p>

<h4>Task:</h4>
<ul>
  <li>Convert a string to uppercase and lowercase.</li>
  <li>Reverse a string.</li>
  <li>Find the length of a string without using the <code>length</code> function.</li>
</ul>

<h4>Sample Solution:</h4>
<pre><code>std::string str = "Hello, World!";
std::transform(str.begin(), str.end(), str.begin(), ::toupper);
cout << "Uppercase: " << str << endl;
std::transform(str.begin(), str.end(), str.begin(), ::tolower);
cout << "Lowercase: " << str << endl;
std::reverse(str.begin(), str.end());
cout << "Reversed: " << str << endl;
int len = 0;
while (str[len] != '\0') len++;
cout << "Length: " << len << endl;
</code></pre>

<hr>

<h3>Practice Task 3: Working with Boolean Types (3 minutes)</h3>
<p>Explore the boolean data type and conditional expressions.</p>

<h4>Task:</h4>
<ul>
  <li>Create and initialize a boolean variable.</li>
  <li>Use conditional expressions to make decisions.</li>
</ul>

<h4>Sample Solution:</h4>
<pre><code>bool isAdult = true;
if (isAdult) {
    cout << "You are an adult." << endl;
} else {
    cout << "You are not an adult." << endl;
}
</code></pre>

<hr>

<h3>Practice Task 4: Exploring C++ Containers (7 minutes)</h3>
<p>Dive into C++ containers like <code>std::vector</code> and <code>std::map</code> for more complex data handling.</p>

<h4>Task:</h4>
<ul>
  <li>Create a <code>vector</code> and add elements to it.</li>
  <li>Create a <code>map</code> to store key-value pairs.</li>
  <li>Access elements and iterate through the containers.</li>
</ul>

<h4>Sample Solution:</h4>
<pre><code>std::vector<int> numbers = {10, 20, 30};
numbers.push_back(40);
std::map<std::string, int> ages;
ages["John"] = 25;
ages["Jane"] = 30;
for (int num : numbers) cout << num << " ";
for (auto pair : ages) cout << pair.first << ": " << pair.second << " years old" << endl;
</code></pre>

<hr>

<h3>Wrap-up (2 minutes)</h3>
<p>You have experimented with various aspects of C++ data types and standard library features. These practice tasks enhance your skills and lay the foundation for more complex programming tasks. Continue to explore and practice these concepts.</p>

<hr>
