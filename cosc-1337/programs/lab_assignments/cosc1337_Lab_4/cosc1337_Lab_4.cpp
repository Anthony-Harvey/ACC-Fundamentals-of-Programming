//	Anthony Harvey
//	cosc-1337:	Sravan Kumpati
//	Lab 4:		Driver's License Exam
//	DUE:		July 6th

	//	Chapter 8, pg.597
	//	
	//	The State Department of Motor Vehicles (DMV) has asked you to write a program that grades the written portion of the driver's license exam,
	//	which has 20 multiple choice questions.
	//
	//	Here are the correct answers:
	//		1:	B	6:	A	11:	B	16:	C
	//		2:	D	7:	B	12:	C	17:	C
	//		3:	A	8:	A	13:	D	18:	B
	//		4:	A	9:	C	14:	A	19:	D
	//		5:	C	10:	D	15:	D	20:	A
	//
	//	To do this, you should create a "TestGrader" class. The class will have an answers array of 20 characters,
	//	which holds the correct test answers. It will have two public member functions that enable user programs
	//	to interact with the classes "setKey" and "grade".
	//
	//	The "setKey" function receives a 20-character string holding the correct answers and copies the information
	//	into its "answers" array.
	//
	//	The "grade" function receives a 20-character string holding the test taker's answers and compares each
	//	of their answers to the correct one.
	//
	//	An applicant must correctly answer 15 or more of the 20 questions to pass the exam.
	//
	//	After "grading" the exam, the "grade" function should return the following to the user:
	//		
	//		A message indicating whether or not they passed the exam
	//		The number of right answers and the number of wrong answers
	//		A list of the question numbers for all incorrectly answered questions
	//
	//	The client program that creates and uses a "TestGrader" object should first make a single call to "setKey",
	//	passing it a string containing the 20 correct answers. Once this is done, it should allow a test takers 20 answers
	//	to be entered, making sure only letter A-D are allowed, and stores them in a 20 charcater Array.
	
	
	
//	Psuedo Code Below


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int testSize = 20;

class DMVGrader
{
	//~ string of answers;
	string answers = "ABCDABDCABCBABDAAAAA";
	//~ create an array to pass the string to
	string answerKey[testSize];
	
	private:
		//~ answerKeyComparison{};
		//~ passFail{};
		//~ countCorrect{};
		//~ showIncorrect{};
		
	public:
		string getAnswers()
		{
			return answerKey;
		}
		
		//~ void setKey(string[])
		//~ {
			//~ userAnswers = answers[]
		//~ }
		//~ void gradeUser[a]
		
};

void userAnswers (int []);
void test ();

int main()
{
	string testerName;
	char doAnother;
	char testTakersAnswers[20];
	
	DMVGrader testerName;
	
	//~ Obtain the testerNames answers and validate them
	//~ string answerFunction()
	//~ {
	//~ }
	
	DMVGrader.setKey("ABCDABDCABCBABDAAAAA");
	DMVGrader.gradeUser;
	

	cout << testerName.getAnswers();

	return 0;
}
//~ void showSCores
