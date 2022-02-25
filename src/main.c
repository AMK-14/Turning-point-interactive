#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

int helloWorldBasic(void);
int helloWordFinal(void);

void calculatorBasic(void);

void calculatorMedium(void);
int fourMathOperatorChoice(void);

void calculatorFinal(void);
int scientificCalculatorOperatorsChoice(void);

void ticTacToe(void);

void clear(void);

void waitForEnter(void);

// compile with "gcc main.c helloWorldBrach.c calculatorBranch.c ticTacToeBranch.c -o interactive"

int main(void)
{
    char input[256];
    int inputSelection[2] = {1, 0};

    while (1 == 1)
    {
        inputSelection[1] = 0; // Reset input selection
        clear();

        printf("What difficulty of C do you want learn about \"easy\", \"medium\", or \"hard\"? \n Input your selection.\n");
        scanf("%s", input);

        inputSelection[0] = strcmp(input, "easy");

        if (inputSelection[0] == 0 && inputSelection[1] == 0)
        {
            helloWorldBasic();

            inputSelection[1] = 1;
        }

        inputSelection[0] = strcmp(input, "medium");

        if (inputSelection[0] == 0 && inputSelection[1] == 0)
        {
            calculatorBasic();

            inputSelection[1] = 1;
            inputSelection[0] = 0;
        }

        inputSelection[0] = strcmp(input, "hard");

        if (inputSelection[0] == 0 && inputSelection[1] == 0)
        {
            ticTacToe();

            inputSelection[1] = 1;
        }
        else if (inputSelection[1] == 0)
        {
            printf("You did not enter a valid choice. Please try again\n\n");
            waitForEnter();
        }
    }

    return 0;
}

void clear(void)
{
    // "clear" for mac "cls" for windows
    system("clear");
}

void waitForEnter(void)
{
    printf("Press [Enter] key to continue.\n");
    fflush(stdin); // clean stdin
    getchar();     // wait for ENTER
}

// Beginning of Hello World Branch----------------------------------------------------------------------

int helloWorldBasic(void)
{

    char input[256];
    int inputSelection[2] = {0, 0};

    while (inputSelection[1] == 0)
    {

        clear();

        // introduce to Helloworld
        printf(
            "|----------------------------------------------------------------|\n"
            "|This is a Hello World Program which prints out the simple       |\n"
            "|phrase \"Hello World!\" which is most programmers first program   |\n"
            "|----------------------------------------------------------------|\n");

        printf("\nHello World!\n\n");

        // choose explain or advanced
        printf(
            "Type \"explain\" for an explanation of the program works or\n"
            "\"advanced\" to see a more advanced version of this program\n");

        scanf("%s", input);

        // check for explain
        inputSelection[0] = strcmp(input, "explain");

        if (inputSelection[0] == 0 && inputSelection[1] == 0)
        {
            clear();
            //  explain Hello world
            printf(
                "|----------------------------------------------------------------------|\n"
                "|The Code Is Below This Text Box                                       |\n"
                "|The Hello World! program is a simple one as it only uses the function |\n"
                "|\"printf()\" which takes the parameters between the parantheses and     |\n"
                "|prints out what is in side the the quotation marks tells the computer |\n"
                "|its is a string of characters                                         |\n"
                "|----------------------------------------------------------------------|\n"

                "\nprinf(\"Hello World!\")\n\n");

            waitForEnter();

            // inputSelection[1] = 1;

            while (inputSelection[1] == 0)
            {

                clear();

                printf(
                "|----------------------------------------------------------------|\n"
                "|Type \"beginning\" to go back to the beginning of the program     |\n"
                "|                                                                |\n"
                "|Type \"advanced\" to see a more advanced version of this program  |\n"
                "|----------------------------------------------------------------|\n");

                scanf("%s", input);

                inputSelection[1] = 0; // reset input

                inputSelection[0] = strcmp(input, "beginning");

                if (inputSelection[0] == 0 && inputSelection[1] == 0)
                {
                    // nothing will make it go back to the beginning
                    inputSelection[1] = 1;
                }

                inputSelection[0] = strcmp(input, "advanced");

                if (inputSelection[0] == 0 && inputSelection[1] == 0)
                {
                    helloWordFinal();
                    inputSelection[1] = 1;
                }
                else if (inputSelection[1] == 0)
                {
                    printf("You did not enter a valid choice. Please try again\n\n");
                    waitForEnter();
                }
            }
        }

        // check for advanced
        inputSelection[0] = strcmp(input, "advanced");

        if (inputSelection[0] == 0 && inputSelection[1] == 0)
        {
            helloWordFinal();

            inputSelection[1] = 1;
        }
        else if (inputSelection[1] == 0)
        {
            printf("You did not enter a valid choice. Please try again\n\n");
            waitForEnter();
        }
    }
    return 0;
}

// hello world with user input
int helloWordFinal(void)
{
    char userName[256];
    char input[256];
    int inputSelection[2] = {0, 0};

    clear();

    printf(
        "|-----------------------------------------------------------------|\n"
        "|This is a Hello World Program which takes in you name and outputs|\n"
        "| Hello then your name.                                           |\n"
        "|-----------------------------------------------------------------|\n");

    printf("\nEnter your name: \n");
    scanf("%s", userName);

    printf("\n\nHello %s\n\n", userName);

    waitForEnter();

    while (inputSelection[1] == 0)
    {

        // resets for new loop
        inputSelection[0] = 0;
        inputSelection[1] = 0;
        clear();

        // choose beginning, explain or advanced
        printf(
            "|----------------------------------------------------------------|\n"
            "|Type \"beginning\" to go back to the beginning of the program     |\n"
            "|                                                                |\n"
            "|Type \"explain\" for an explanation of the program works or        |\n"
            "|                                                                |\n"
            "|Type \"replay\" to run this Hello program again                   |\n"
            "|----------------------------------------------------------------|\n");

        scanf("%s", input);

        // check for beginning
        inputSelection[0] = strcmp(input, "beginning");

        if (inputSelection[0] == 0)
        {
            // nothing will make it go back to the beginning
            inputSelection[1] = 1;
        }

        inputSelection[0] = strcmp(input, "replay");
        if (inputSelection[0] == 0)
        {
            clear();

            helloWordFinal();

            waitForEnter();
            inputSelection[1] = 1;
        }
        inputSelection[0] = strcmp(input, "explain");

        if (inputSelection[0] == 0)
        {
            clear();

            // explanation
            printf(
                "|----------------------------------------------------------------|\n"
                "|This first initiates the string \"userName\".                     |\n"
                "|Then prints out the string literal \"Enter your name: \"          |\n"
                "|and uses the function scanf() to get input and assign it        |\n"
                "|to userName. Then printf() is used to concatenate a the literal |\n"
                "|string \"Hello\" the string userName                              |\n"
                "|----------------------------------------------------------------|\n\n\n");

            // code
            printf(
                "This is the code\n"
                "----------------------------------------\n"
                "1| char userName[256];\n\n"
                "2| printf(\"Enter your name: \");\n\n"
                "3| scanf(\"%cs\", userName)\n"
                "4| printf(\"Hello %cs\", userName);\n\n"
                "----------------------------------------\n\n",
                37, 37 // ASCII 37 = %

            ); // explain this

            waitForEnter();
            inputSelection[1] = 1;
        }
        else if (inputSelection[1] == 0)
        {
            printf("You did not enter a valid choice. Please try again\n\n");
            waitForEnter();
        }
    }

    return 0;
}

// End of Hello World Branch ------------------------------------------------------
// Beginning of Calculator Branch

void calculatorBasic(void)
{
    float num1;
    float num2;
    char input[256];
    int inputSelection[2];
    clear();

    printf("Enter a number: ");
    scanf("%f", &num1);

    printf("\nEnter another number: ");
    scanf("%f", &num2);

    printf("The sum of those two numbers is %f\n\n", num1 + num2);

    waitForEnter();
    // testing

    inputSelection[0] = 0;
    inputSelection[1] = 0;

    while (inputSelection[1] == 0)
    {

        // resets for new loop
        inputSelection[0] = 0;
        inputSelection[1] = 0;
        clear();

        // choose beginning, explain or advanced
        printf(
            "|----------------------------------------------------------------|\n"
            "|Type \"beginning\" to go back to the beginning of the program     |\n"
            "|                                                                |\n"
            "|Type \"explain\" for an explanation of the program works or       |\n"
            "|                                                                |\n"
            "|Type \"replay\" to run this program again or                      |\n"
            "|                                                                |\n"
            "|Type \"advanced\" and advanced version of this program            |\n"
            "|----------------------------------------------------------------|\n");

        scanf("%s", input);

        // check for beginning
        inputSelection[0] = strcmp(input, "beginning");

        if (inputSelection[0] == 0)
        {
            // nothing will make it go back to the beginning
            inputSelection[1] = 1;
        }

        inputSelection[0] = strcmp(input, "replay");
        if (inputSelection[0] == 0)
        {
            clear();

            calculatorBasic();

            waitForEnter();
            inputSelection[1] = 1;
        }
        inputSelection[0] = strcmp(input, "advanced");
        if (inputSelection[0] == 0)
        {
            clear();

            calculatorMedium();

            
            inputSelection[1] = 1;
        }
        inputSelection[0] = strcmp(input, "explain");

        if (inputSelection[0] == 0)
        {
            clear();

            // explanation
            printf(
                "|----------------------------------------------------------------|\n"
                "|In lines 1 & 2 two float variables are declared which means that|\n"
                "|hold a number with decimals. Then in line 3 \"Enter a number: \"  |\n"
                "|is printed to the screen and 4 input is taken and assigned to   |\n"
                "|num1 and the same is done in lines 6 & 7. Then line 8 prints to |\n"
                "|the screen \"The sum of those two numbers is %cf\" and the %cf      |\n"
                "|means that result of num1 + num2 is substituted for %cf          |\n"
                "|----------------------------------------------------------------|\n\n\n",
                37, 37, 37);

            // code
            printf(
                "This is the code\n"
                "--------------------------------------------------------------\n"
                "1| float num1;\n"
                "2| float num2;\n"
                "3| printf(\"Enter a number: \");\n"
                "4| scanf(\"%cf\", &num1);\n"
                "5|\n"
                "6| printf(\"Enter a number: \");\n"
                "7| scanf(\"%cf\", &num2);\n"
                "8| printf(\"The sum of those two numbers is %cf\", num1 + num2);\n"
                "--------------------------------------------------------------\n\n",
                37, 37, 37 // ASCII 37 = %

            ); // explain this

            waitForEnter();
            inputSelection[1] = 1;
        }
        else if (inputSelection[1] == 0)
        {
            printf("You did not enter a valid choice. Please try again\n\n");
            waitForEnter();
        }
    }

    // testing     ????
}

int fourMathOperatorChoice(void)
{   
    int mathOperatorChoice;
    int chosenMathOperator;
    while (1 == 1)
    {
        clear();

        printf("What do you want to do multiplication(1), addition(2), subtaction(3), and division(4)\n");
        printf("Input the number between the parantheses for your choosen operator\n");

        scanf("%d", &mathOperatorChoice);

        switch (mathOperatorChoice)
        {
        case 1: 
        chosenMathOperator = 1;
            break;
        case 2: 
        chosenMathOperator = 2;
            break;
        case 3: 
        chosenMathOperator = 3;
            break;
        case 4: 
        chosenMathOperator = 4;
            break;

        default:
            printf("You did not enter a valid mathematical operater. Try again.\n");
            waitForEnter();
            continue;
            break;
        }

        break;

        waitForEnter();
        
    }
    return chosenMathOperator;
}

void calculatorMedium(void)
{
    float num1;
    float num2;
    int mathOperator;
    char input[256];
    char inputSelection[2];

    while (1 == 1)
    {

        mathOperator = fourMathOperatorChoice();

        printf("Enter your first number: ");
            scanf("%f", &num1);

        printf("\nEnter your second number: ");
            scanf("%f", &num2);
        printf("\n");

            switch (mathOperator)
        {
        case 1:
            printf("Your answer is %f\n", num1 * num2); break;
        case 2:
            printf("Your answer is %f\n", num1 + num2); break;
        case 3:
            printf("Your answer is %f\n", num1 - num2); break;
        case 4:
            if (num2 == 0)
            {
                printf("Sorry You cant divide by zero try again.\n");
                waitForEnter();
                continue;
            }
            else
            {
                printf("Your answer is %f\n", num1 / num2);
            }
            break;
        default:
            break;
        }

        break;
    }

waitForEnter();

    inputSelection[0] = 0;
    inputSelection[1] = 0;

    while (inputSelection[1] == 0)
    {

        // resets for new loop
        inputSelection[0] = 0;
        inputSelection[1] = 0;
        clear();

        // choose beginning, explain or advanced
        printf(
            "|----------------------------------------------------------------|\n"
            "|Type \"beginning\" to go back to the beginning of the program     |\n"
            "|                                                                |\n"
            "|Type \"explain\" for an explanation of the program works or       |\n"
            "|                                                                |\n"
            "|Type \"replay\" to run this program again or                      |\n"
            "|                                                                |\n"
            "|Type \"advanced\" and advanced version of this program            |\n"
            "|----------------------------------------------------------------|\n");

        scanf("%s", input);

        // check for beginning
        inputSelection[0] = strcmp(input, "beginning");

        if (inputSelection[0] == 0)
        {
            // nothing will make it go back to the beginning
            inputSelection[1] = 1;
        }

        inputSelection[0] = strcmp(input, "replay");
        if (inputSelection[0] == 0)
        {
            clear();

            calculatorMedium();

            waitForEnter();
            inputSelection[1] = 1;
        }
        inputSelection[0] = strcmp(input, "advanced");
        if (inputSelection[0] == 0)
        {
            clear();

            calculatorFinal();

            inputSelection[1] = 1;
        }
        inputSelection[0] = strcmp(input, "explain");

        if (inputSelection[0] == 0)
        {
            clear();

            // code with explanation
            printf(
                "This is the code with explanations on the other side of the \"|\"\n"
                "----------------------------------------------------------------------------------------------------------\n"
                "1 |float num1;                         | Declares variable named num1 thats a decimal number\n"
                "2 |float num2;                         | Declares variable named num1 thats a decimal number\n"
                "3 |int mathOperator;                   | Declares variable named mathOperator thats a integer\n"
                "4 |char input[256];                    | Declares a string variable \n"
                "5 |char inputSelection[2];             | Declares a string variable\n"
                "6 |\n"
                "7 |    while (1 == 1)                  | Start infinite loop\n"
                "8 |    {\n"
                "9 |\n"
                "10|       mathOperator = fourMathOperatorChoice();\n"
                "11|\n"
                "12|        printf(\"Enter your first number: \");\n"
                "13|            scanf(\"%c\", &num1);                           | Gets input for num1\n"
                "14|\n"
                "15|        printf(\"Enter your second number: \");\n"
                "16|            scanf(\"%cf\", &num2);                          | Gets input for num1\n"
                "17|\n"
                "18|           switch (mathOperator)                        | Goes through the logic of the calculator\n"
                "19|        {\n"
                "20|        case 1:\n"
                "21|            printf(\"Your answer is %cf\", num1 * num2); break;\n"
                "22|        case 2:\n"
                "23|            printf(\"Your answer is %cf\", num1 + num2); break;\n"
                "24|        case 3:\n"
                "25|            printf(\"Your answer is %cf\", num1 - num2); break;\n"
                "26|        case 4:\n"
                "27|            if (num2 == 0)\n"
                "28|            {\n"
                "29|                printf(\"Sorry You cant divide by zero try again.\");               | Stops error from dividing by zero\n"
                "30|                waitForEnter();\n"
                "31|                continue;\n"
                "32|            }\n"
                "33|            else\n"
                "34|            {\n"
                "35|                printf(\"Your answer is %cf\", num1 / num2);\n"
                "36|            }\n"
                "37|            break;\n"
                "38|        default:\n"
                "39|            break;\n"
                "40|        }\n"
                "41|\n"
                "42|        break;\n"
                "43|    }\n"
                "----------------------------------------------------------------------------------------------------------\n\n",
                37, 37, 37, 37, 37,37 // ASCII 37 = %
            ); 

            
            inputSelection[1] = 1;
        }
        else if (inputSelection[1] == 0)
        {
            printf("You did not enter a valid choice. Please try again\n\n");
            waitForEnter();
        }
    }



}

int scientificCalculatorOperatorsChoice(void)
{
    int mathOperatorChoice;
    int chosenMathOperator;
    while (1 == 1)
    {
        clear();

        printf("What do you want to do multiplication(1), addition(2), subtaction(3), and division(4)\n\n");

        printf("                                        or\n\n");

        printf("powers(5), square root(6) )\n\n");

        printf("                                        or\n\n");

        printf("sin(7), cosine(8), tanget(9) trigonometrics returns the value in radians\n\n");

        printf("Input the number between the parantheses for your choosen operator\n");

        scanf("%d", &mathOperatorChoice);

        switch (mathOperatorChoice)
        {
        case 1: 
        chosenMathOperator = 1;
            break;
        case 2: 
        chosenMathOperator = 2;
            break;
        case 3: 
        chosenMathOperator = 3;
            break;
        case 4: 
        chosenMathOperator = 4;
            break;
        case 5: 
        chosenMathOperator = 5;
            break;
        case 6: 
        chosenMathOperator = 6;
            break;
        case 7: 
        chosenMathOperator = 7;
            break;
        case 8: 
        chosenMathOperator = 8;
            break;
        case 9: 
        chosenMathOperator = 9;
            break;
        default:
            printf("You did not enter a valid mathematical operater. Try again.\n");
            waitForEnter();

            continue;
            break;
        }

        break;

        waitForEnter();
        
    }
    return chosenMathOperator;
}    

void calculatorFinal(void)
{
    float num1;
    float num2;
    int mathOperator;
    char input[256];
    char inputSelection[2];
    double base, power, answer;

    while (1 == 1)
    { 
        clear();

        mathOperator = scientificCalculatorOperatorsChoice();

            switch (mathOperator)
        {
        case 1:
            printf("Enter your first number: ");
            scanf("%f", &num1);

            printf("\nEnter your second number: ");
            scanf("%f", &num2);
            printf("\n");

            printf("Your answer is %f\n", num1 * num2); break;
        case 2:
            printf("Enter your first number: ");
            scanf("%f", &num1);

            printf("\nEnter your second number: ");
            scanf("%f", &num2);
            printf("\n");

            printf("Your answer is %f\n", num1 + num2); break;
        case 3:
            printf("Enter your first number: ");
            scanf("%f", &num1);

            printf("\nEnter your second number: ");
            scanf("%f", &num2);
            printf("\n");

            printf("Your answer is %f\n", num1 - num2); break;
        case 4:
            printf("Enter your first number: ");
            scanf("%f", &num1);

            printf("\nEnter your second number: ");
            scanf("%f", &num2);
            printf("\n");

            if (num2 == 0)
            {
                printf("Sorry You cant divide by zero try again.\n");
                waitForEnter();
                continue;
            }
            else
            {
                printf("Your answer is %f\n", num1 / num2);
            }
            break;
        case 5: 
            printf("Enter the base number: ");
            scanf("%lf", &base);

            printf("Enter the power raised: ");
            scanf("%lf",&power);

            answer = pow(base,power);

            printf("%lf^%lf = %lf\n", base, power, answer);
            break;
        case 6: 
            printf("Enter your a number: ");
            scanf("%f", &num1);

            answer = sqrt(num1);

            printf("Square root of %f =  %lf\n", num1, answer);
        
            break;   
        case 7: 
            printf("Enter your a number: ");
            scanf("%f", &num1);

            answer = sin(num1);

            printf("sin(%f) = %lf\n", num1, answer);
            break;   
        case 8: 
            printf("Enter your a number: ");
            scanf("%f", &num1);

            answer = cos(num1);

            printf("cos(%f) = %lf\n", num1, answer);
            break;    
        case 9: 
            printf("Enter your a number: ");
            scanf("%f", &num1);

            answer = tan(num1);

            printf("tan(%f) = %lf\n", num1, answer);
            break;                                      
        default:
            break;
        }
        waitForEnter();
        break;
    }

inputSelection[0] = 0;
inputSelection[1] = 0;

while (inputSelection[1] == 0)
    {

        // resets for new loop
        inputSelection[0] = 0;
        inputSelection[1] = 0;
        clear();

        // choose beginning, explain or advanced
        printf(
            "|----------------------------------------------------------------|\n"
            "|Type \"beginning\" to go back to the beginning of the program     |\n"
            "|                                                                |\n"
            "|Type \"explain\" for an explanation of the program works or       |\n"
            "|                                                                |\n"
            "|Type \"replay\" to run this program again                         |\n"
            "|----------------------------------------------------------------|\n");

        scanf("%s", input);

        // check for beginning
        inputSelection[0] = strcmp(input, "beginning");

        if (inputSelection[0] == 0)
        {
            // nothing will make it go back to the beginning
            inputSelection[1] = 1;
        }

        inputSelection[0] = strcmp(input, "replay");
        if (inputSelection[0] == 0)
        {
            clear();

            calculatorFinal();

            waitForEnter();
            inputSelection[1] = 1;
        }
        inputSelection[0] = strcmp(input, "explain");
        if (inputSelection[0] == 0)
        {
            clear();

            // code and explanation
            printf(
                "This is the code\n"
                "--------------------------------------------------------------"
                "\n1 |float num1;"
                "\n2 |float num2;"
                "\n3 |int mathOperator;"
                "\n4 |char input[256];"
                "\n5 |char inputSelection[2];"
                "\n6 |double base, power, answer;"
                "\n7 |while (1 == 1)"
                "\n8 |    { "
                "\n9 |        clear();"
                "\n10|"
                "\n11|        mathOperator = scientificCalculatorOperatorsChoice();"
                "\n12|"
                "\n13|            switch (mathOperator)"
                "\n14|        {"
                "\n15|        case 1:"
                "\n16|            printf(\"Enter your first number: \");"
                "\n17|            scanf(\"%cf\", &num1);"
                "\n19|"
                "\n20|            printf(\"Enter your second number: \");"
                "\n21|            scanf(\"%cf\", &num2);"
                "\n22|"
                "\n23|            printf(\"Your answer is %cf\", num1 * num2); break;"
                "\n24|        case 2:"
                "\n25|            printf(\"Enter your first number: \");"
                "\n26|            scanf(\"%cf\", &num1);"
                "\n27|"
                "\n28|            printf(\"Enter your second number: \");"
                "\n29|            scanf(\"%cf\", &num2);"
                "\n30|"
                "\n31|            printf(\"Your answer is %cf\", num1 + num2); break;"
                "\n32|        case 3:"
                "\n33|            printf(\"Enter your first number: \");"
                "\n34|            scanf(\"%cf\", &num1);"
                "\n35|               "
                "\n36|                printf(\"Enter your second number: \");"
                "\n37|                scanf(\"%cf\", &num2);"
                "\n38|            "
                "\n39|                printf(\"Your answer is %cf\", num1 - num2); break;"
                "\n--------------------------------------------------------------\n\n",
                37,37, 37, 37, 37, 37, 37, 37, 37 // ASCII 37 = %
            );

            waitForEnter();
            clear();

            printf(
                "This is the code\n"
                "--------------------------------------------------------------\n"
                "\n40|        case 4:"
                "\n41|            printf(\"Enter your first number: \");"
                "\n42|            scanf(\"%cf\", &num1);"
                "\n43|"
                "\n44|            printf(\"Enter your second number: \");"
                "\n45|            scanf(\"%cf\", &num2);"
                "\n46|"
                "\n47|            if (num2 == 0)"
                "\n48|            {"
                "\n49|                printf(\"Sorry You cant divide by zero try again.\");"
                "\n50|                waitForEnter();"
                "\n51|                continue;"
                "\n52|            }"
                "\n53|            else"
                "\n54|           {"
                "\n55|               printf(\"Your answer is %cf\", num1 / num2);"
                "\n56|            }"
                "\n57|            break;"
                "\n58|        case 5: "
                "\n59|            printf(\"Enter the base number: \");"
                "\n60|            scanf(\"%clf\", &base);"
                "\n61|"
                "\n62|            printf(\"Enter the power raised: \");"
                "\n63|            scanf(\"%clf\",&power);"
                "\n64|"
                "\n65|            answer = pow(base,power);"
                "\n66|"
                "\n67|            printf(\"%clf^%clf = %clf\", base, power, answer);"
                "\n68|            break;"
                "\n69|        case 6: "
                "\n70|            printf(\"Enter your a number: \");"
                "\n71|            scanf(\"%cf\", &num1);"
                "\n72|"
                "\n73|            answer = sqrt(num1);"
                "\n74|"
                "\n75|            printf(\"Square root of %cf =  %clf\", num1, answer);"
                "\n76|"
                "\n77|            break; "
                "\n--------------------------------------------------------------\n\n",
                37, 37 , 37, 37, 37, 37, 37, 37, 37, 37, 37
            );

            waitForEnter();
            clear();
            printf(
                "This is the code\n"
                "--------------------------------------------------------------\n"
                "\n78|        case 7: "
                "\n77|            printf(\"Enter your a number: \");"
                "            scanf(\"%cf\", &num1);"
                ""
                "            answer = sin(num1);"
                ""
                "            printf(\"sin(%cf) = %clf\n\", num1, answer);"
                "            break; "  
                "        case 8: "
                "            printf(\"Enter your a number: \");"
                "            scanf(\"%cf\", &num1);"
                ""
                "            answer = cos(num1);"
                ""
                "            printf(\"cos(%cf) = %clf\", num1, answer);"
                "            break;"    
                "        case 9: "
                "            printf(\"Enter your a number: \");"
                "            scanf(\"%cf\", &num1);"
                ""
                "            answer = tan(num1);"
                ""
                "            printf(\"tan(%cf) = %clf\", num1, answer);"
                "            break; "                                     
                "        default:"
                "            break;"
                "        }"
                "        waitForEnter();"
                "        break;"
                "    }"
                "\n--------------------------------------------------------------\n\n",
                37, 37, 37, 37, 37, 37, 37, 37, 37
            );
            inputSelection[1] = 1;
        }
        else if (inputSelection[1] == 0)
        {
            printf("You did not enter a valid choice. Please try again\n\n");
            waitForEnter();
        }
    }

}

// end of calculator branch and begginning of TIC TAC TOE branch ---------------------------------

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

void clear(void);


void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    clear();
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);

    printf("\n");
}

int checkFreeSpaces()
{

    int freeSpaces = 9;

    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove()
{
    int x;

    int y;

    do
    {
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--;

        printf("Enter column #(1-3): ");
        scanf("%d", &y);
        y--;

        if (board[x][y] != ' ')
        {
            printf("Invalid move!\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
}

void computerMove()
{
    // creates a seed based on current time
    srand(time(0));
    int x;
    int y;
    if (checkFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');
        board[x][y] = COMPUTER;
    }
    else
    {
        printWinner(' ');
    }
}

char checkWinner()
{
    // check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    // check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    // check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }
    return ' ';
}

void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("YOU WIN!");
        waitForEnter();
    }
    else if (winner == COMPUTER)
    {
        printf("YOU LOSE!");
        waitForEnter();
    }
    else
    {
        printf("IT'S A TIE!");
        waitForEnter();
    }
}

void ticTacToe(void)
{   
    int inputSelection[2] = {0,0};
    char input[256];
    char winner = ' ';
    char response = ' ';

    winner = ' ';
    response = ' ';

    resetBoard();

    while (winner == ' ' && checkFreeSpaces() != 0)
    {
        printBoard();
        playerMove();

        winner = checkWinner();

        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
        computerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
    }
    printBoard();
    printWinner(winner);



    while (inputSelection[1] == 0)
    {

        // resets for new loop
        inputSelection[0] = 0;
        inputSelection[1] = 0;
        clear();

        // choose beginning, explain or advanced
        printf(
            "|----------------------------------------------------------------|\n"
            "|Type \"beginning\" to go back to the beginning of the program     |\n"
            "|                                                                |\n"
            "|Type \"explain\" for an explanation of the program works or       |\n"
            "|                                                                |\n"
            "|Type \"replay\" to run this program again                         |\n"
            "|----------------------------------------------------------------|\n");

        scanf("%s", input);

        // check for beginning
        inputSelection[0] = strcmp(input, "beginning");

        if (inputSelection[0] == 0)
        {
            // nothing will make it go back to the beginning
            inputSelection[1] = 1;
        }

        inputSelection[0] = strcmp(input, "replay");
        if (inputSelection[0] == 0)
        {
            clear();

            ticTacToe();

            inputSelection[1] = 1;
        }

        inputSelection[0] = strcmp(input, "explain");

        if (inputSelection[0] == 0)
        {
            clear();

            // code with explanation
            printf(
                "This is the code for the main function\n"
                "----------------------------------------------------------------------------------------------------------\n"
                "\n1 |   char winner = ' ';"
                "\n2 |   char response = ' ';"
                "\n3 |"
                "\n4 |    winner = ' ';"
                "\n5 |    response = ' ';"
                "\n6 |"
                "\n7 |    resetBoard();"
                "\n8 |"
                "\n9 |    while (winner == ' ' && checkFreeSpaces() != 0)"
                "\n10|    {"
                "\n11|        printBoard();"
                "\n12|        playerMove();"
                "\n13|"
                "\n14|        winner = checkWinner();"
                "\n15|"
                "\n16|        if (winner != ' ' || checkFreeSpaces() == 0)"
                "\n17|        {"
                "\n18|            break;"
                "\n19|        }"
                "\n20|        computerMove();"
                "\n21|        winner = checkWinner();"
                "\n22|        if (winner != ' ' || checkFreeSpaces() == 0)"
                "\n23|        {"
                "\n24|            break;"
                "\n25|        }"
                "\n26|    }"
                "\n27|    printBoard();"
                "\n28|    printWinner(winner);"
                "\n----------------------------------------------------------------------------------------------------------\n\n"
            ); 
            waitForEnter();
            
            inputSelection[1] = 1;
        }
        else if (inputSelection[1] == 0)
        {
            printf("You did not enter a valid choice. Please try again\n\n");
            waitForEnter();
        }
    }
}

