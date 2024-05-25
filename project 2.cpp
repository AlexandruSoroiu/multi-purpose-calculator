#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

float add();
float subtract();
float cubic_root();
float division();
float multiplication();
float powers();
float getNum(); // function to interact with the user
float getnum(); // function to interact with the user
float triangle_area();
float square_root();
float perimeter_of_square();
void motivational_quotes();
void quiz();
void riddles();
void star_triangles();
void menu(); // function that controls everything
bool isPrime(int);
void guess_number();
bool guess(int*, int*, int, int);

int main()
{
    menu();
    return 0;
}

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

float add()
{
    return getNum() + getnum();
}

float subtract()
{
    return getNum() - getnum();
}

float perimeter_of_square()
{
    float side;
    cout << "Please introduce the side of the square below.\n\n";
    cin >> side;
    cout << endl;
    return side*4;
}

float cubic_root()
{
    return cbrt(getNum()); // returns cubic root
}

float square_root()
{
    return sqrt(getNum()); // returns square root
}

float triangle_area()
{
    float base, height;
    cout << "Please introduce the base of the triangle.\n\n";
    cin >> base;
    cout << "Now, please introduce the height of the triangle.\n\n";
    cin >> height;
    return (base*height)/2; // returns the area
}

float getNum()
{
    float num;
    cout << "Please input one number below. Hit return after you entered the number.\n\n";
    cin >> num;
    cout << endl;
    return num;
}

float getnum()
{
    float num2;
    cout << "Please input another number below. Hit return after you entered the number.\n\n";
    cin >> num2;
    cout << endl;
    return num2;
}

float division()
{
    return getNum()/getnum();
}

float multiplication()
{
    return getNum()*getnum();
}

float powers()
{
    float base, exponent;
    cout << "Please enter the base number.\n\n";
    cin >> base;
    cout << "Now, please enter the exponent that you want to raise the base with.\n\n";
    cin >> exponent;
    cout << endl;
    return pow(base, exponent);
}

void menu()
{
    float option;

    do
    {
        cout <<"\n*****************************************************************************************************************"
        << "\n\n\n                                          CALCULATOR MENU                                                        "
        << "\n\n\n                                                                     by Alexandru Daniel Soroiu                  "
        << "\n\n\n*******                                   1. Add two numbers                                              *******"
        << "\n\n\n*******                                   2. Subtract two numbers                                         *******"
        << "\n\n\n*******                                   3. Divide two numbers                                           *******"
        << "\n\n\n*******                                   4. Multiply two numbers                                         *******"
        << "\n\n\n*******                                   5. Find out the perimeter of a square                           *******"
        << "\n\n\n*******                                   6. Find the cubic root of a number                              *******"
        << "\n\n\n*******                                   7. Find the square root of a number                             *******"
        << "\n\n\n*******                                   8. Raise a number to the N power                                *******"
        << "\n\n\n*******                                   9. Find the area of a basic triangle                            *******"
        << "\n\n\n*******                                   10. Print out star triangles                                    *******"
        << "\n\n\n*******                                   11. Riddle me                                                   *******"
        << "\n\n\n*******                                   12. Motivational Quotes                                         *******"
        << "\n\n\n*******                                   13. Check if a number is prime                                  *******"
        << "\n\n\n*******                                   14. Trivia Quiz with a Lilo & Stitch theme!!                    *******"
        << "\n\n\n*******                                   15. Guess the number                                            *******"
        << "\n\n\n*******                                   16. Quit Program                                                *******"
        << "\n\n\n*****************************************************************************************************************";
    
        cout << "\n\nPlease type in the number of the operation that you want to perform.\n\n";
        cin >> option;
        cout << endl;

        if (option == 1)
        {
            cout << add() << endl;
        }

        else if(option == 2)
        {
            cout << subtract() << endl;
        }

        else if (option == 3)
        {
            cout << division() << endl;
        }

        else if (option == 4)
        {
            cout << multiplication() << endl;
        }

        else if (option == 5)
        {
            float perimeter = perimeter_of_square();
            cout << "The perimeter of the square with the side that you introduced is: " << perimeter << endl;
        }

        else if (option == 6)
        {
            float cr = cubic_root();
            cout << "The cubic root of the number you introduced is: " << cr << endl << endl;
        }

        else if (option == 7)
        {
            float sr = square_root();
            cout << "The square root of the number you introduced is: " << sr << endl << endl;
        }

        else if (option == 8)
        {
            cout << powers() << endl;
        }

        else if (option == 9)
        {
            float area = triangle_area();
            cout << "The area of the triangle with the base and height you introduced is: " << area << endl;
        }

        else if (option == 10)
        {
            star_triangles();
            cout << endl;
        }

        else if (option == 11)
        {
            riddles();
            cout << endl;
        }

        else if (option == 12)
        {
            motivational_quotes();
            cout << endl;
        }

        else if (option == 13)
        {
            int n;
            cout << "Enter the number of values you want to check: ";
            cin >> n;

            int numbers[n]; // array that stores the number of elements the users introduces determined by the variable n
            cout << "Enter " << n << " numbers:" << endl << endl;

            for (int i = 0; i < n; ++i) {
                cin >> numbers[i];
            }
            cout << "Prime number check:" << endl;
            for (int i = 0; i < n; ++i)
            {
                cout << numbers[i] << (isPrime(numbers[i]) ? " is a prime number" : " is not a prime number") << endl; // ternary operator
            }
        }

        else if (option == 14)
        {
            quiz();
            cout << endl;
        }
        
        else if (option == 15)
        {
            guess_number();
            cout << endl;
        }

    } while (option != 16);
}

void riddles()
{
    string riddle1, riddle2, riddle3, riddle4, riddle5;
    int number;
    riddle1 = "\nWhat color can you eat?\n";
    riddle2 = "\nPronounced as one letter and written with three, two letters there are and two only in me. I am double. I am single. I am black, blue, and gray. I am read from both ends, but the same either way. What am I?\n";
    riddle3 = "\nI touch the earth and I touch the sky, but if I touch you, you will likely die. What am I?\n";
    riddle4 = "\nIf there are five apples and you take away three, how many apples do you have?\n";
    riddle5 = "\nIf you throw me out the window, you will leave a grieving wife, but drop me in the middle of a door, and you might just save a life. What am I?\n";
    
    cout << "Enter a number from 1 to 5:\n\n";
    cin >> number;
        
    if (number == 1)
    {
        string answer1;
        cout << riddle1 << endl;
        cin.ignore(100, '\n');
        cout << "\nPlease enter your answer for the riddle below: " << endl << endl;
        getline(cin, answer1);
        if (answer1 == "orange" || answer1 == "ORANGE" || answer1 == "an orange" || answer1 == "a orange" || answer1 == "An orange" || answer1 == "AN ORANGE" || answer1 == "oRaNgE" || answer1 == "OrAnGe" || answer1 == "the orange" || answer1 == "THE ORANGE")
        {
            cout << "\nBravo!\n\n";
        }
    }
    else if (number == 2)
    {
        string answer2;
        cout << riddle2 << endl;
        cin.ignore(100, '\n');
        cout << "\nPlease enter your answer for the riddle below: " << endl << endl;
        getline(cin, answer2);
        if (answer2 == "eye" || answer2 == "EYE" || answer2 == "eYe" || answer2 == "EyE" || answer2 == "an eye" || answer2 == "eyes" || answer2 == "the eye")
        {
            cout << "\nYay!\n\n";
        }
    }
    else if (number == 3)
    {
        string answer3;
        cout << riddle3 << endl;
        cin.ignore(100, '\n');
        cout << "\nPlease enter your answer for the riddle below: " << endl << endl;
        getline(cin, answer3);
        if (answer3 == "a lightning" || answer3 == "lightning" || answer3 == "LiGhTnInG" || answer3 == "LIGHTNING" || answer3 == "lIgHtNiNg" || answer3 == "the lightning")
        {
            cout << "\nYou are killing it!\n\n";
        }
    }
    else if (number == 4)
    {
        string answer4;
        cout << riddle4 << endl;
        cin.ignore(100, '\n');
        cout << "\nPlease enter your answer for the riddle below: " << endl << endl;
        getline(cin, answer4);
        if (answer4 == "three" || answer4 == "THREE" || answer4 == "tHrEe" || answer4 == "ThReE" || answer4 == "3" || answer4 == "the number 3" || answer4 == "the number three" || answer4 == "THE NUMBER 3" || answer4 == "THE NUMBER THREE")
        {
            cout << "\nDamn it. You are lowkey very good at riddles, ngl.\n\n";
        }
    }
    else if (number == 5)
    {
        string answer5;
        cout << riddle5 << endl;
        cin.ignore(100, '\n');
        cout << "\nPlease enter your answer for the riddle below: " << endl << endl;
        getline(cin, answer5);
        if (answer5 == "n" || answer5 == "N" || answer5 == "letter n" || answer5 == "LETTER  N" || answer5 == "the letter n" || answer5 == "THE LETTER N" || answer5 == "The Letter n" || answer5 == "The Letter N")
        {
            cout << "\nCongrats!\n\n";
        }
    }
}

void motivational_quotes()
{
    string quote;
    cout << "Hi there! You're in the right place, I got you. I want you to tell me what do you feel.\n\nFor example, if you feel like you are alone, type alone.\n\nIf you feel sadness, type sad.\n\nIf you don't feel like you want to keep going, type motivation.\n\nIf you feel hopeless, type hope.\n\nIf you feel anxious, type anxiety.\n\nIf you feel grief, type grief.\n\nLastly, if you feel depressed, type depression.\n\nI can help you to boost your confidence and to make you realize what a valuable person you are!\n\n";
    getline(cin, quote);
    cin >> quote;

    if (quote == "depression" || quote == "DEPRESSION" || quote == "Depression" || quote == "dEpReSsIoN" || quote == "DePrEsSiOn")
    {
        cout << "\nRunning away from your problems is a race you will never win. Instead, reach out for help and try to confront them.\n\n";
    }

    else if (quote == "anxiety" || quote == "Anxiety" || quote == "ANXIETY" || quote == "aNxIeTy" || quote == "AnXiEtY")
    {
        cout << "\nI promise you nothing is as chaotic as it seems. Nothing is worth diminishing your health. Nothing is worth poisoning yourself into stress, anxiety, and fear.\n\n";
    }

    else if (quote == "grief" || quote == "GRIEF" || quote == "Grief" || quote == "gRiEf" || quote == "GrIeF")
    {
        cout << "\nGrief is not a disorder, a disease, or a sign of weakness. It is an emotional, physical, and spiritual necessity, the price you pay for love. The only cure to grief is to grieve.\n\n";
    }

    else if (quote == "alone" || quote == "ALONE" || quote == "aLoNe" || quote == "AlOnE" || quote == "Alone")
    {
        cout << "\nSometimes you need to be alone. Not to be lonely, but to enjoy your free time being yourself.\n\n";
    }

    else if (quote == "SAD" || quote == "sAd" || quote == "sad" || quote == "Sad" || quote == "SaD")
    {
        cout << "\nAlthough the world is full of suffering, it is full also of the overcoming of it\n\n";
    }

    else if (quote == "motivation" || quote == "Motivation" || quote == "MOTIVATION" || quote == "mOtIvAtIoN" || quote == "MoTiVaTiOn")
    {
        cout << "\nAll dreams are within reach. All you have to do is keep moving towards them.\n\n";
    }

    else if (quote == "hope" || quote == "HOPE" || quote == "Hope" || quote == "hOpE" || quote == "HoPe")
    {
        cout << "\nEverything will turn out okay, even if it feels hard right now. Hold onto hope; hold onto yourself. Whatever you are going through will not stay, but you will.\n";
    }
    else
    {
        cout << "\nPlease choose one of the options mentioned before!\n\n";
    }
}


void star_triangles()
{
    int variable;
    cout << "Please enter a number below and the program will output * triangles based on the number that you introduced.\n\nNote: Keep in mind that the maximum number that you can introduce for a good result is 23. Do not exceed the number because the screen won't be able the output all the stars.\n\n";
    cin >> variable;
    for (int i = 1; i <= variable; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = i+1; j<=variable; j++)
        {
            cout << " ";
        }
        
    cout << "\t";
    
        for(int j = i; j <= variable; j++)
        {
            cout << "*";
        }
        for(int j = 1; j < i; j++)
        {
            cout << " ";
        }
    
    cout << "\t";
    
        for(int j = 1; j<i; j++)
        {
            cout << " ";
        }
        for(int j = i; j <= variable; j++)
        {
            cout << "*";
        }
        
    cout <<"\t";
    
        for(int j = i + 1; j <= variable; j++)
        {
            cout << " ";
        }
        
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
    
    cout << endl;
    
    }
}

void quiz()
{
    char playquiz;
    cout << "Do you want to play a quiz with a Lilo & Stitch theme? (y/n)\n\n";
    cin >> playquiz;
    if (playquiz == 'y' || playquiz == 'Y')
    {
        cout << "\nHi there! Hope everything is going fantastic! I just wanted to let you know that today I started working on my 1st project, namaley a Trivia Game, and you will be participating in it. Keep in mind that I am going to keep track of your score and I will output it after each question! I am going to ask you 10 questions where each questions weighs different amount of points! Each question you get wrong, it is going to impact your score by 10 points. There is no maximum score, but I am telling you this:\n\nIf you score is below 100, you're considered a non-fan Lilo & Stich and they are gonna hunt you!\n\nIf your score is above 100, you're considered an average fan of this cartoon and they will keep you alive.\n\nBUT, if you score is above 200, which is quite impossible honestly, you're gonna become their president and they are going to venerate you for the entire life! So please be mindful and think twice before answering to a question!\n\nThe trivia game theme is gonna beeee:\n\nLILO AND STITCH CARTOON!\n\nAre you ready? Let's get started!" <<endl;
        string firstName, lastName, q7, q8;
        char q1, q2, q3, q4, q5, q6, q9, q10, tryAgain;
        float score;

        cout << "\nCan you first tell me what is your first name?\n\n";

        cin >> firstName;

        cout << "\n\nAwesome! Now your last name, please!\n\n";

        cin >> lastName;

        cout << "\n\nAmazing! Thank you for your cooperation, " << firstName<< " " <<lastName << "!" << " Good luck!" << endl;

        cout <<"\nThe first question for you is: 1) What is Stitch's original experiment number? (20 points) \n\n a) 626 \n b) 6261 \n c) 6262 \n d) 6263\n\nType in your answer below, for example, you could either type in a or A if you think that one is the correct answer. Same for the other options!\n" << endl;

        cin >> q1;

        if (q1 == 'a' || q1 == 'A')

        {
            score = 20;
            cout << "\nCongratulations! You got your first question correct! Stitch would be proud of you!\n\nScore: " << score << ". Keep going, you got this! \n";
        }

        else
        {
            score = -10;
            cout << "\nUgh! That is actually wrong. Quite a shame to get the first question wrong. Stitch would be so mad. But don't give up, you got this!\n\nScore: " <<score << "\n\nHowever, from my kind soul, I can offer you another chance to get the first question right because I know how frustrating is to get the first question wrong.\n\nDo you want to try again?\n\nType in 'y' or 'Y' for yes or 'n' or 'N' for no below!\n\n";
        
            cin >> tryAgain;

            if (tryAgain == 'y' || tryAgain == 'Y')
            {
                cout << "\nFantastic! Let's try again. This time try to use your brain more, LOL!\n\n 1) What is Stitch's original experiment number? \n a) 626 \n b) 6261 \n c) 6262 \n d) 6263\nType your answer below!\n\n";
                cin >> q1;

                if (q1 == 'a' || q1 == 'A')
                {
                    score = 20;
                    cout << "\nCongratulations! You got your first question correct, finally!! Stitch would be proud of you!\nScore: " << score << ". Keep going, you got this! \n\n";
                }
            }

            else
            {
                score = -10;
                cout << "\n\n Such a loser! Next question I guess..\n\n ";
            }
        }

        if (tryAgain == 'n' || tryAgain == 'N')
        {
            cout << "\n\n Such a loser! Next question I guess..\n\n ";
        }
        
        else
        {
            cout << "\n\nOk! I didn't get that answer, but anyway, let's move further!\n\n ";
        }
        
        cout << " \n\n Next question. 2) What is Lilo's last name? (15 points) \n\n a) Pelekai \n b) Nani \n c) Hämsterviel \n d) Cobra Bubbles \n\nType in your answer below!\n" << endl;
    
        cin >> q2;

        if ((q1 == 'a' || q1 == 'A') && (q2 == 'a' || q2 == 'A'))
        {
            score = score + 15;
            cout << "\n Wow! That's two in a row! You're on fire! Amazing, it seems like someone is a real fan of Lilo & Stitch! \n\n Your new score is: " << score;
        }
        else
        {
            score = score - 10;
            cout << "\n\nNo, dumbass. That is not the correct answer. Good luck winning this game, haha! *evil laugh*\n\nScore: " << score << endl << endl;
        }

        cout << "\n\n3) Who is the social worker who oversees Lilo's case? (30 points) \n a) Mr. Jumba \n b) David \n c) Cobra Bubbles \n d) Pleakley \n\n Type in your answer below.\n\n";
        cin >> q3;

        if (q3 == 'c' || q3 == 'C')
        {
            score = score + 30;
            cout << " Your answer issssssss: " << " *drums* *drums* *drums* " << " CORRECT! Congrats! Your new score is gonna be: " << score << endl;
        }
        else
        {
            score = score - 10;
            cout << "\nI knew that you're such a human failure and you're not gonna get any questions right. Why are you keep trying? My game is IMPOSSIBLE to win! Especially for dummies like you! \n Score: " << score << "\n";
        }

        cout << "\nNext! This is the fourth question. Let's see! \n\n4) What is Stitch's special power? (10 points) \na) Super strength \nb) Invisibility\nc) Fire breathing\nd) The ability to adapt and learn quickly\n\nType in your answer below!\n\n";

        cin >> q4;

        if ((q1 == 'a' || q1 == 'A') && (q2 == 'a' || q2 == 'A') && (q3 == 'c' || q3 == 'C') && (q4 == 'd' || q4 == 'D'))
        {
            score = score + 10;
            cout << "\nFANTASTIC! You got it! THAT IS 4 IN A ROW!!!! KEEP GOING LIKE THAT!\nSo far, you scored " << score << " point. Congrats, " << firstName << " " << lastName <<"!\n\n";
        }
        else if (q4 == 'd' || q4 == 'D')
        {
            score = score + 10;
            cout << "\n\nCongrats! You got it right. You're just lucky I guess. Keep going! \n\nYour score is: " << score << endl << endl;
        }
        else
        {
            score = score - 10;
            cout << "\n\nIdiot! Can you just try to think more? It is just common sense!\nYour score: " << score << endl << endl;
        }

        cout << "\n\nOk. So we are halfway there. We got 6 more questions. I am going to ask you right now a question that worths 40 points. If you're getting it wrong, I am going to take you away 15 points. So, please, be careful with this one!\n\n5) What is the name of the alien council that oversees the Galactic Federation?\n\na) The Grand Council \nb) The Intergalactic Senate \nc) The Cosmic Parliament \nd) The Supreme Council of Aliens \n\nType in your answer below " << endl << endl;
    
        cin >> q5;

        if (q5 == 'd' || q5 == 'D')
        {
            score = score + 40;
            cout << "\n\nI knew you could do it! Congratulations! You are very correct! Your score has been increased with 40 points. You're almost there!\n\nNew score: " << score << endl << endl;
        }
        else
        {
            score = score - 15;
            cout << "How could you be so stupid? You could've google it and get double points, but you put that instinct first. Ugh! You're wrong! Your score has been decreased by 15 points. You're not gonna win ever!\n\nNew score: " << score << endl << endl;
        }

        cout << "Next question. \n\n6) What is Stitch's primary instinct upon arriving on Earth? (25 points)\n\na) To destroy everything in his path\nb) To find a family and belong\nc) To conquer the planet for his creator\nd) To eat all the food he can find\n\nThat is a though one, so be careful! Type in your answer  below!\n\n";

        cin >> q6;

        if ((q1 == 'a' || q1 == 'A') && (q2 == 'a' || q2 == 'A') && (q3 == 'c' || q3 == 'C') && (q4 == 'd' || q4 == 'D') && (q5 == 'd' || q5 == 'D') && (q6 == 'b' || q6 == 'B'))
        {
            score = score + 25;
            cout << "\n\nOMG! OMG! OMG! That is 6 in a row! CONGRATS!!!!!!! You are indeed a fan of this amazing cartoon, aren't you? I am so proud of you!\n\n Your score now is: " << score;
        }
        else if (q6 == 'b' || q6 == 'B')
        {
            score = score + 25;
            cout << "\n\nGood job! You got it right this time! \n\n Your new score is: " << score << endl << endl;
        }
        else
        {
            score = score - 10;
            cout << "\n\nIf stitch would have the ability to eat people, he would have eaten you by now. How could you get this question wrong? Dang it!\n\nScore: " << score << endl << endl;
        }

        cout << "\n\nOk, so this question is the most special one. It is an one-time opportunity to get you back on track. It weighs 100 points. If you're getting it right, I am gonna give the points to you, else I am going to take you 50 points away. So be careful with this one. I am going to make it a little bit more difficult and I won't be providing you multiple choices. I want you to type the answer! The question is: \n\n 7) Where does the Lilo & Stitch cartoon primarly take place?\n\n";

        cin >> q7;

        if ((q7 == "Hawaii" || q7 == "hawaii" || q7 == "HAWAII" || q7 == "hAwAiI" || q7 == "HaWaIi" || q7 == "HAwaII" || q7 == "haWAii" || q7 == "HAWaii" || q7 == "hawAII"))
        {
            score = score + 100;
            cout << "\n\nCan't believe that you actually got this question right! You are actually a real fan of Lilo and Stitch. Congrats! +100 points to you! \n\n Your new score is: " << score << endl << endl;
        }

        else if (q7 == "Hawai" || q7 == "hawai" || q7 == "HAWAI" || q7 == "hAwAI" || q7 == "HaWai" || q7 == "HAwaI" || q7 == "haWAi" || q7 == "HAWai" || q7 == "hawAI")
        {
            score = score + 50;
            cout << "\n\nHaha! I got you! Since you made a silly mistake and you don't know how to properly spell the name of the state, I am going to give you half points. Congrats! \n\nScore: " << score << endl << endl;
        }

        else
        {
            score = score - 50;
            cout << "\n\nThis is so shameful! You can't even get this question right.\n\n";
        }

        cout << "Alright, " << firstName << " " << lastName << "! We're at the question 8. We have two more. Here comes the next question.\n\nIs it true that that Stitch's favorite food is Coconut Cake and Coffee? (30 points)\n\nType in 'True' if you think that is the correct answer or type in 'False' if you think that is the right answer. Let's see!\n\n";

        cin >> q8;

        if (q8 == "true" || q8 == "True" || q8 == "TRUE" || q8 == "tRuE" || q8 == "TrUe" || q8 == "TRUe" || q8 == "TRue" || q8 == "trUE")
        {
            score = score + 30;
            cout << "\n\nSlaaaaaay! You got it right! Congratulations!!!! +30 points to you\n\n";
        }
        else if (q8 == "false" || q8 == "False" || q8 == "FALSE" || q8 == "FaLsE" || q8 == "fAlSe" || q8 == "FALsE" || q8 == "fALSe" || q8 == "fAlSE")
        {
            score = score - 10;
            cout << "\n\nThis is getting to embarrassing for you. I don't even know why are you still playing because you will anyway lose.\n\n";
        }

        cout << "\nNext question. 9) What is the name of the surfing competition that Lilo and Stitch enter together? (40 points)\n\na) Ohana Surf Competition\nb) Big Kahuna Surf Contest\nc) Blue Hawaii Surf Fest\nd) Aloha Classic Surf Challenge\n\nType in your letter answer now!\n\n";

        cin >> q9;

        if ((q1 == 'a' || q1 == 'A') && (q2 == 'a' || q2 == 'A') && (q3 == 'c' || q3 == 'C') && (q4 == 'd' || q4 == 'D') && (q5 == 'd' || q5 == 'D') && (q6 == 'b' || q6 == 'B') && (q7 == "Hawaii" || q7 == "hawaii" || q7 == "HAWAII" || q7 == "hAwAiI" || q7 == "HaWaIi" || q7 == "HAwaII" || q7 == "haWAii" || q7 == "HAWaii" || q7 == "hawAII") && (q8 == "true" || q8 == "True" || q8 == "TRUE" || q8 == "tRuE" || q8 == "TrUe" || q8 == "TRUe" || q8 == "TRue" || q8 == "trUE") && (q9 == 'b' || q9 == 'B'))
        {
            score = score + 40;
            cout << "\n\nYou haven't gotten any question wrong up until this point so this meanssss 9 IN A ROWWWW!!! Congrats! Keep going like that!\n\nYour score so far is: " << score;
        }
    
        else if (q9 == 'b' || q9 == 'B')
        {
            score = score + 40;
            cout << "\n\nWell done! That is correct! +40 points added to your score. One more question and you're done.\n\nScore: " << score << endl;
        }

        else
        {
            score = score - 10;
            cout << "\n\nJust give up and you're gonna make your life much easier.\n\nScore: " << score << endl << endl;
        }

        cout << "\n\nLAST QUESTION! ARE\nYOU\nREADY?\n\nIt is not gonna be a tough one because I know you've been through this all game and it was pretty demanding, ngl. So I am going to give you an easy one. The last question is: \n\n10)What is Lilo's favorite hobby? (25 points)\n\na) Surfing\nb) Hula dancing\nc) Reading\nd) Painting\n\nType in your letter answer below.\n\n";

        cin >> q10;

        if ((q1 == 'a' || q1 == 'A') && (q2 == 'a' || q2 == 'A') && (q3 == 'c' || q3 == 'C') && (q4 == 'd' || q4 == 'D') && (q5 == 'd' || q5 == 'D') && (q6 == 'b' || q6 == 'B') && (q7 == "Hawaii" || q7 == "hawaii" || q7 == "HAWAII" || q7 == "hAwAiI" || q7 == "HaWaIi" || q7 == "HAwaII" || q7 == "haWAii" || q7 == "HAWaii" || q7 == "hawAII") && (q8 == "true" || q8 == "True" || q8 == "TRUE" || q8 == "tRuE" || q8 == "TrUe" || q8 == "TRUe" || q8 == "TRue" || q8 == "trUE") && (q9 == 'b' || q9 == 'B') && (q10 == 'b' || q10 == 'B'))
        {
            score = score + 25;
            cout << "\n\nThe judges have decided!\n\nYOU HAVE BEEN DECLARED THE WINNER OF THE LILO & STICH CHAMPIONSHIP TRIVIA GAME WITH 0 ANSWERS WRONG!!!!!!!!!\n\n CONGRATULATIONSSSSSSSS!!!!!\n\n\n";
        }

        else if (q10 == 'b' || q10 == 'B')
        {
            score = score + 25;
            cout << "\n\nThat was correct! Congrats! You managed to reach the end of the trivia game. Hope you enjoyed it and I will see you next time! Thanks for playing, " << firstName << " " << lastName << "!\n\nYour final score is: " << score << endl << endl;
        }

        else

        {
            score = score - 10;
            cout << "\n\nUnfortunately, that was wrong! Better luck next time. Our game came to an end, hope you enjoyed it and I will see you. *in hell*\n\nFinal score: " << score << endl << endl << "Thanks for playing, " << firstName << " " << lastName << "!\n";
        }

        if (score >= 100)
        {
            cout << "W   W  III N   N N   N EEEE RRRR  " << endl;
            cout << "W   W   I  NN  N NN  N E    R   R " << endl;
            cout << "W W W   I  N N N N N N EEE  RRRR  " << endl;
            cout << "WW WW   I  N  NN N  NN E    R R   " << endl;
            cout << "W   W  III N   N N   N EEEE R  RR " << endl << endl << endl << "\n\nFinal score: " << score << endl << endl;
            cout << "Thank you so much for playing, " << firstName << " " << lastName << "! It was such a pleasure! I will see you at the 2nd project soon! Have a great day!\n\n";
        }
    }
}

void guess_number() 
{
    bool play = true;
    int upper_range = 100;
    int score = 0;
    int response;
    cout << "Welcome to guess the number game!" << endl << endl;
    do 
    {
        int answer = 1 + rand() % upper_range;
        int guesses[7];
        cout << "A random number from 1 to 100 has been generated. You have a maximum of 7 attempts to guess the number." << endl << endl;
        int i;
        for (i = 0; i < 7; i++)
        {
            if (guess(guesses, &score, answer, i))
            {
                break;
            } else if (i == 6) {
                cout << "Game over. The answer was: " << answer << endl << endl;
                score = 0;
            }
        }
        cout << "Guesses:";
        for (int j = 0; j <= i; j++)
        {
            cout << " " << guesses[j];
        }
        cout << endl << endl;
        cout << "Score: " << score << endl;
        cout << endl;
        cout << "Would you like to play again? (type 1 or 2)" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl << endl;
        cin >> response;
        play = response == 1;
    } while (play);
}

bool guess(int* guesses, int* score, int answer, int index)
{
    int g;
    cout << "Enter your guess: ";
    cin >> g;
    cout << endl;
    guesses[index] = g;
    if (g == answer) 
    {
        cout << "Congratulations! You have guessed the number in " << index + 1 << " attempt" << (index > 0 ? "s" : "") << "." << endl << endl;
        *score = *score + int(pow(2, (6 - index)));
        return true;
    } 
    else if (g > answer)
    {
        cout << "The number is lower than your guess." << endl << endl;
    }
    else
    {
        cout << "The number is greater than your guess." << endl << endl;
    }
    return false;
}
