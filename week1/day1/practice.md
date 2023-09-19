## Practice Task Descriptions

### 1. Join First and Last Name:
Combine your first name and last name into a single name.  
- Create (Initialize) two words named `firstName` and `lastName`.  
- Join them together with a space between them and save this in a new word named `fullName`.  

*Initialize*: To set an initial value for a variable in a program.

### 2. Extract a Specific Word:
Get a specific word from a given sentence.  
- Create a word (string) named `content` with the value "C++ Programming Language".  
- Use a special action (method) called `substr` to take out the word "Programming" and store it in a new word (string) named `subContent`.  

*Method*: A function that performs a specific task in a program.

### 3. Locate a Character:
Find the first place a specific letter shows up in a sentence.  
- Create a word (string) named `text` with the value "Welcome to the world of C++".  
- Use the `find` method to find the first time the letter 'o' appears and store this location in a place (variable) named `position`.  

*Variable*: A storage location in a program that holds a value or data.

### 4. Change a Specific Word:
Replace a certain word within a given sentence.  
- Create a sentence (string) named `sentence` with the value "I love cats".  
- Use the `replace` method to change the word "cats" to "dogs" in the sentence (string) `sentence`.  

### 5. Make All Letters Uppercase:
Change all the letters of a sentence to uppercase.  
- Create a word (string) named `text` with the value "Learning C++".  
- Make all the letters uppercase.  

### 6. Find the Length of a Sentence:
Find out how many letters are in a given sentence.  
- Create a sentence (string) named `message` with the value "Welcome!".  
- Find the length of the sentence and store it in a place (variable) named `length`.  

### 7. Reverse the Letters:
Flip the order of letters in a given word.  
- Create a word (string) named `original` with the value "C++ is Fun".  
- Reverse the order of the letters.  

### 8. Add Words to a Sentence:
Insert additional words at a specific spot in a sentence.  
- Create a sentence (string) named `text` with the value "C++ is powerful".  
- Add the words " and easy" at the end of the sentence.  

### 9. Remove Words from a Sentence:
Delete certain words from a given sentence.  
- Create a sentence (string) named `sentence` with the value "C++ is hard but rewarding".  
- Delete the words " hard" from the sentence.  

### 10. Compare Two Sentences:
Check if two given sentences are the same.  
- Create two sentences (strings) named `str1` and `str2` with the value "C++".  
- Compare the sentences and store the result in a true-or-false place (boolean variable) named `isEqual`.  

*Boolean Variable*: A variable that can only be true or false.

## Answers:
```cpp
// Task 1:
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
