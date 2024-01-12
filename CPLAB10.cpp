#include <iostream>
#include <string>

using namespace std;

string tolowercase(const string& str)
{
    string result;
    for (char c : str)
    {
        result += tolower(c);
    }
    return result;
}

// Function prototypes for overloaded functions
void sendMessage(const string& message);
void sendMessage(const string& message, const string& messageType);
void receiveMessage(const string& message);
void receiveMessage(const string& message, const string& messageType);
void makePhoneCall(const string& caller, const string& receiver);
void makePhoneCall(const string& caller, const string& receiver, const string& callType);
void ringUntilAnswer(const string& caller, const string& receiver);
void ringUntilAnswer(const string& caller, const string& receiver, const string& callType);

int main()
{
    string opt;

    do {
        cout << "          |Phone|" << endl << endl;
        cout << "Please Select an option Below: " << endl;
        cout << "(a) Send a Message" << endl;
        cout << "(b) Receive Message" << endl;
        cout << "(c) Make a phone call" << endl;
        cout << "(d) Receive a call" << endl;
        cout << "(e) Exit" << endl;
        cout << "> ";
        cin >> opt;

        if (tolowercase(opt) == "a")
        {
            string message, messageType;
            cout << "Enter a Message: ";
            getline(cin >> ws, message);
            cout << "Enter Message Type (plain/audio/multimedia): ";
            cin >> messageType;
            sendMessage(message, messageType);
            break;
        }
        else if (tolowercase(opt) == "b")
        {
            receiveMessage("I'm doing well, thank you!");
            break;
        }
        else if (tolowercase(opt) == "c")
        {
            makePhoneCall("Alice", "Bob");
            break;
        }
        else if (tolowercase(opt) == "d")
        {
            ringUntilAnswer("Charlie", "David");
            break;
        }
        else if (tolowercase(opt) == "e")
        {
            exit(0);
            break;
        }
        else
        {
            cout << endl << "INVALID OPTION SELECT THE CORRECT OPTION" << endl;
        }
    } while (tolowercase(opt) != "a" || tolowercase(opt) != "b" || tolowercase(opt) != "c" || tolowercase(opt) != "d");

    return 0;
}

// function to send a plain text message
void sendMessage(const string& message)
{
    cout << "Sending Plain Text Message: " << message << endl;
}

//overloaded  function to send different types of messages (audio, multimedia, etc.)
void sendMessage(const string& message, const string& messageType)
{
    cout << "Sending " << messageType << " Message: " << message << endl;
}

//function to receive a plain text message
void receiveMessage(const string& message)
{
    cout << "Receiving Plain Text Message: " << message << endl;
}

// Overloaded function to receive different types of messages (audio, multimedia, etc.)
void receiveMessage(const string& message, const string& messageType)
{
    cout << "Receiving " << messageType << " Message: " << message << endl;
}

// function to make a phone call
void makePhoneCall(const string& caller, const string& receiver)
{
    cout << "Calling " << receiver << " from " << caller << "..." << endl;

}

// Overloaded function to make different types of phone calls (audio, video, etc.)
void makePhoneCall(const string& caller, const string& receiver, const string& callType)
{
    cout << "Calling " << receiver << " from " << caller << " using " << callType << " call..." << endl;
    // In a real scenario, this is where you might simulate a call setup
}

//  function to ring until the call is answered
void ringUntilAnswer(const string& caller, const string& receiver)
{
    cout << "Ringing " << receiver << " from " << caller << "..." << endl;

    char answer;
    cout << receiver << ", do you want to answer the call? (y/n): ";
    cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        cout << receiver << " answered the call! Conversation started." << endl;
    }
    else
    {
        cout << receiver << " did not answer the call. Call ended." << endl;
    }
}

// Overloaded function to ring until the call is answered, specifying the call type
void ringUntilAnswer(const string& caller, const string& receiver, const string& callType)
{
    cout << "Ringing " << receiver << " from " << caller << " using " << callType << " call..." << endl;

    char answer;
    cout << receiver << ", do you want to answer the call? (y/n): ";
    cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        cout << receiver << " answered the call! Conversation started." << endl;
    }
    else
    {
        cout << receiver << " did not answer the call. Call ended." << endl;
    }
}
