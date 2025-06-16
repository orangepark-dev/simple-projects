/*
tip: Shift + Alt + A for comments, Ctrl + / for single line comments
*/

/*
Variable Notes

    double price = 19.99;
    char grade = 'A';
    bool student = true;
    std::string name = "John Doe";
    std::cout << "Your grade is: " << grade << ". Wow!" << '\n';

*/

/*
Constant Notes

    const double PI = 3.14159;
    -> Capitalize the variable name.

*/

/*
Namespace Notes

    namespace first
    {
        int x = 2;
    }

    int main()
    {
        using namespace first;

        std::cout << x; or second::x;
        return 0;
    }

*/

/*
typedef Notes
    ->refers to a type alias, allowing a nickname for a complex type.

    typedef std::vector<std::pair<std::string, int>> pairlist_t;

    typedef std::string text_t;

    typedef int number_t;

    **replaced by using nowadays**

    using text_t = std::string;

    using number_t = int;

    -> text_t firstName = "jigyoung";

*/

/*
arithmitic operators Notes
    // +, -, *, /, %

    students = students + 1;
    students += 1;
    students++;

    students = students - 1;
    students -= 1;
    students--;

    students = students * 2;
    students *= 2;

    students = students / 2;
    students /= 2;
    // decimal portion discarded if "students" is an integer.

    int remainder = students % 3; // Modulus operator

    // parenthesis -> mult, div -> add, sub

*/

/*
type conversion Notes
    // implicit conversion
    int x = 5;
    double y = x; // int to double

    // explicit conversion -> preceeded by type name
    double z = 3.14;
    int a = (int)z; // double to int -> prints 3

    // C++ style casting
    int b = static_cast<int>(z); // double to int

    // string to number conversion
    std::string str = "42";
    int num = std::stoi(str); // string to int

    // number to string conversion
    int c = 100;
    (std::string)c; // int to string

*/

/*
user input Notes
    #include <cmath>

    std::string name;
    int age;

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); // allows spaces in input,
                                             // std::ws ignores leading whitespace when followed by input

    std::cout << "Hello " << name << '\n';
    std::cout << ", you are " << age << " years old.";

*/

/*
Useful Math Related Functions Notes
    #include <cmath>

    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(2, 3);  // 2 raised to the power of 3
    z = sqrt(16);   // square root of 16
    z = abs(-5);    // absolute value of -5
    z = ceil(4.2);  // rounds up to the nearest integer
    z = floor(4.8); // rounds down to the nearest integer
    z = round(4.5); // rounds to the nearest integer (4.5 rounds to 4)

    // www.cplusplus.com/reference/cmath/

*/

/*
Hypotenuse calculator program Notes

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side C: " << c;

    return 0;


*/
/*
if statements Notes

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Order of if statements matters
    if (age >= 100)
    {
        std::cout << "You are too old to enter this site!";
    }
    else if (age >= 18)
    {
        std::cout << "Welcome to the site!";
    }
    else if (age < 0)
    {
        std::cout << "You haven't been born yet!";
    }
    else
    {
        std::cout << "You are not old enough to enter!";
    } */

/*
Switches Notes
-> can be used to replace multiple if-else statements when checking a single variable against multiple values.

  char grade;

  std::cout << "What letter grade?: ";
  std::cin >> grade;

  switch (grade)
  {
  case 'A':
      std::cout << "You got an A!";
      break;
  case 'B':
      std::cout << "You got a B!";
      break;
  case 'C':
      std::cout << "You got a C!";
      break;
  case 'D':
      std::cout << "You got a D!";
      break;
  case 'F':
      std::cout << "You got an F!";
      break;
  default:
      std::cout << "Invalid grade.";
  } */

/*
Tenary Operator Notes
-> condition ? expression1(true) : expression2(false);

  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << (age >= 18 ? "You are an adult." : "You are a minor.");

  or

  hungry ? std::cout << "You are hungry" : std::cout << "You are full";

*/

/*
Logical Operators Notes
-> && (and), || (or), ! (not)

  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 18 && age < 100)
  {
      std::cout << "You are an adult.";
  }
  else if (age < 0 || age >= 100)
  {
      std::cout << "You are not a valid age.";
  }
  else
  {
      std::cout << "You are a minor.";
  }
 ---------------------------
  bool sunny = true;

  if (!sunny){
    std::cout << "It's not sunny outside";
    }
  else{
    std::cout << "It is sunny outside";
  }

*/

/*
useful string methods note

    std:: string name;

    if (name.empty()) ~
    -> if the string includes nothing

    name.length()
    -> length of a string

    name.clear();
    -> clears what's inside

    name.append(xyz);
    -> appends xyz to the end of the string

    name.at(1);
    -> points what's at the string's index 1.

    name.insert(1, "a");
    -> insert 'a' at the index 1.

    name.find('a');
    -> finds the location of 'a' in a string.

    name.erase(0, 3);
    -> erase from index 0 to 2.

*/

/*
while loops note
    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;
     */

/*
do while loop note
    int number;

    do
   {
       std::cout << "Enter a positive number: ";
       std::cin >> number;
   } while(number < 0);

   std::cout << "The number is: " << number;


*/

/*
for loop note
       for (int i = 1; i <= 10; i++)
   {
       std::cout << i << '\n';
   }

   std::cout << "Happy new year!\n";


*/

/*
break & continue note
-> break out of a loop or skip current iteration

for(int i = 1; i<=20; i++){
        if(i == 13){
            break; or continue
        }

        std::cout << i << '\n';
    }

*/

/*
Nested Loops note

    for(int i = 1; i <= rows; i++){
        for(int j  = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << '\n';

    }
*/

/*
pseudo random number generator

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

*/

/*
user defined functions note

    void happyBirthday(std::string name, int age);

    int main()
    {
        std::string name = "Umjunsik";
        int age = 30;

        happyBirthday(name, age);

        return 0;
    }
    void happyBirthday(std::string name, int age)
    {
        std::cout << "Happy Birthday to " << name << "!\n";
        std::cout << "You are now " << age << " years old!\n";
    }

*/

/*
Return Keyword Note
    #include <iostream>

    double square(double length);
    double cube(double length);

    int main()
    {
        double length = 5.0;
        double area = square(length);
        double volume = cube(length);

        std::cout << "Area: " << area << "cm^2\n";
        std::cout << "Volume: " << volume << "cm^3\n";

        return 0;
    }

    double square(double length)
    {
        return length * length;
    }
    double cube(double length)
    {
        return length * length * length;
    }

*/

/*
Overloaded Functions Notes
    void bakePizza();
    void bakePizza(std::string topping1);                       // Function prototype for overloaded function
    void bakePizza(std::string topping1, std::string topping2); // Another overloaded function

    int main()
    {
        bakePizza(); // Calls the default function
        bakePizza("pepperoni");
        bakePizza("pepperoni", "mushrooms"); // Calls the overloaded function with two toppings
        return 0;
    }

    void bakePizza()
    {
        std::cout << "Here is your pizza\n";
    }
    void bakePizza(std::string topping1) // Overloaded function
    {
        std::cout << "Here is your " << topping1 << " pizza!\n";
    }
    void bakePizza(std::string topping1, std::string topping2) // Another overloaded function
    {
        std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
    }
*/

/*
Variable Scope Notes

    #include <iostream>

    void printNum(int myNum);

    int main()
    {
        int myNum = 1;

        printNum(myNum);

        return 0;
    }
    void printNum(int myNum)
    {
        std::cout << myNum;
    }

    // global variables are declared outside of any function.
    // local > global variables
    // "::" allows access to global variables from within a function, even if there's a local variable.
    // try to avoid global variables as much as possible to prevent conflicts and maintain code clarity.

*/

/*
Arrays notes
    #include <iostream>

    int main()
    {
        std::string cars[3]; // declares the length of the array

        cars[0] = "Tesla";
        cars[1] = "Ford";
        cars[2] = "Toyota";

        std::cout << cars[0] << '\n';
        std::cout << cars[1] << '\n';
        std::cout << cars[2] << '\n';

        double prices[] = {5.00, 10.00, 15.00, 20.00, 25.00};

        std::cout << prices[0] << '\n';
        std::cout << prices[1] << '\n';
        std::cout << prices[2] << '\n';
        std::cout << prices[3] << '\n';

        return 0;
    }
*/

/*
sizeof operator notes
    #include <iostream>

    int main()
    {
        std::string name = "Bro df";
        double gpa = 2.5;
        char grade = 'B';
        bool student = true;
        char grades[] = {'A', 'B', 'C', 'D', 'F'};
        std::string students[] = {"Spongebob", "Patrick", "Squidward"};

        std::cout << sizeof(grades) << " bytes\n";                            // Outputs the size of the variable gpa in bytes
        std::cout << sizeof(students) / sizeof(std::string) << " elements\n"; // Outputs the number of elements in the grades array
        return 0;
    }
*/

/*
iterate over an array notes
    #include <iostream>

    int main()
    {

        std::string students[] = {"Alice", "Bob", "Charlie", "David", "Eve"};

        for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
        {
            std::cout << students[i] << '\n';
        }

        char grades[] = {'A', 'B', 'C', 'D', 'F'};
        for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
        {
            std::cout << grades[i] << '\n';
        }
        return 0;
    }
*/

/*
foreach loop notes
    int main()
    {
        int grades[] = {90, 80, 70, 60, 50};
        for (int grade : grades)
        {
            std::cout << "Grade: " << grade << std::endl;
        }
        return 0;
    }
*/

/*
pass an array to a function notes

    double getTotal(double prices[], int size);
    int main()
    {
        double prices[] = {5.00, 10.00, 15.00, 20.00, 25.00};
        int size = sizeof(prices) / sizeof(prices[0]);
        double total = getTotal(prices, size);

        std::cout << "Total: " << total << '\n';

        return 0;
    }

    double getTotal(double prices[], int size)
    {
        double total = 0;

        for (int i = 0; i < size; i++)
        {
            total += prices[i];
        }
        return total;
    }
*/

/*
Searching through an array notes

    #include <iostream>

    int searchArray(int array[], int size, int element);
    int main()
    {
        // one to ten
        int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int size = sizeof(numbers) / sizeof(numbers[0]);
        int index;
        int myNum;

        std::cout << "Enter element to search for: " << '\n';
        std::cin >> myNum;

        index = searchArray(numbers, size, myNum);

        if (index != -1)
        {
            std::cout << myNum << " is at index " << index;
        }
        else
        {
            std::cout << myNum << " is not in the array.";
        }

        return 0;
    }

    int searchArray(int array[], int size, int element) // refers to numbers, size, and myNum in main
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i] == element)
            {
                return i;
            }
        }
        return -1; // Element not found
    }
*/

/*
Fill function notes

    #include <iostream>

    int main()
    {
        const int size = 99;
        std::string foods[size];

        fill(foods, foods + (size / 3), "pizza");
        fill(foods + (size / 3), foods + (size / 3) * 2, "hamburgers");
        fill(foods + (size / 3) * 2, foods + size, "hot dogs");

        for (std::string food : foods)
        {
            std::cout << food << '\n';
        }
        return 0;
    }
*/

/*
array with user inputs notes

    #include <iostream>

    int main()
    {
        std::string foods[5];
        int size = sizeof(foods) / sizeof(foods[0]);
        std::string temp;

        for (int i = 0; i < size; i++)
        {
            std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
            std::getline(std::cin, temp);
            if (temp == "q")
            {
                break;
            }
            else
            {
                foods[i] = temp;
            }
        }
        std::cout << "You like these foods:\n";

        for (std::string food : foods)
        {
            // if food is empty, delete it.
            if (food.empty())
            {
                continue;
            }
            std::cout << food << '\n';
        }
        return 0;
    }



*/

/*
multidimensional arrays notes

    #include <iostream>

    int main()
    {
        // row, column. only columns are mandatory. no rows can have different number of columns.
        std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                                {"Corvette", "Equinox", "Silverado"},
                                {"Challenger", "Durango", "Ram 1500"}};

        int rows = sizeof(cars) / sizeof(cars[0]);          // (all rows) / (one row)
        int columns = sizeof(cars[0]) / sizeof(cars[0][0]); // (one row) / (one element)

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                std::cout << cars[i][j] << " "; // prints each element in the row
            }
            std::cout << '\n';
        }
        return 0;
    }
*/

/*
memory address notes
    int -> 4 bytes
    double -> 8 bytes
    char -> 1 byte
    bool -> 1 byte
    std::string -> 24 bytes (on 64-bit systems)
*/

/*
pass by reference vs pass by value notes

    #include <iostream>

    void swap(std::string &x, std::string &y);
    // pass by referene.
    // without '&', it would be pass by value, which would not change the original variables.
    // unless you want to change the original variables, use pass by value. (memory efficient)
    int main()
    {
        std::string x = "Kool-Aid";
        std::string y = "Water";
        std::string temp;

        swap(x, y);

        std::cout << "x: " << x << '\n';
        std::cout << "y: " << y << '\n';

        return 0;
    }
    void swap(std::string &x, std::string &y)
    {
        std::string temp = x;
        x = y;
        y = temp;
    }
*/

/*
const parameter notes
    #include <iostream>
    // const parameter = parameter that is effectively read-only
    // conveys intent & code is more secure
    // useful for pointers and references

    void printInfo(const std::string &name, const int &age);

    int main()
    {
        std::string name = "Bro";
        int age = 25;

        printInfo(name, age);

        return 0;
    }
    void printInfo(const std::string &name, const int &age)
    {
        std::cout << name << '\n';
        std::cout << age << '\n';
    }
*/

/*
pointers notes
    #include <iostream>
    // pointers = variable that stores a memory address of another variable
    //                    sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    int main()
    {

        std::string name = "Bro";
        std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

        std::string *pName = &name;            // pName is a pointer that stores the address of name
        std::string *pFreePizzas = freePizzas; // pFreePizzas points to the first element of the array
        // do not use & with arrays, as they are already pointers to the first element

        std::cout << pName << " " << *pName << '\n';             // address / value of name
        std::cout << pFreePizzas << " " << *pFreePizzas << '\n'; // address / value of first element of freePizzas

        return 0;
    }

*/