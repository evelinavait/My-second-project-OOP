#include "my_lib2.hpp"

// Declare structure(s)
struct irasas {
  string vardas; // Name of student
  string pavarde;
  //int paz[10];
  int egzas;
  double galut;
  double galut2;
  float median;
};

// Function Prototype(s)
int *scores; 

int main()
{
  irasas *nums;	// To dynamically allocate an array	
	int num_students;	// To hold the number of students
  int n = 0, sum = 0;
  int t;
  string gen;

		// Prompt the user to enter how many students were.
		cout << "Studentu skaicius: ";
		cin >> num_students;
    // Dynamically allocate an array large enough to hold
	  // that many numbers of students.
	  nums = new irasas[num_students];  ///new irasas;


		// Determine input validation.
		while (num_students < 0)
		{
			cout << "Ivestas netinkamas skaicius!\n";
			cout << "Studentu skaicius: ";
			cin >> num_students; 
		}

		// Get the number of grades for each student;
		for (int count = 0; count < num_students; count++)
		{
      cout << "\n";
      cout << "Studento #" << (count + 1) << " informacija: \n";
    ///cin >> nums[count];
      cout<<"Iveskite varda: \n"; cin>>nums[count].vardas;
      cout<<"Iveskite pavarde: \n"; cin>>nums[count].pavarde;
      cout <<"Iveskite egzamino paz.: "; cin>>nums[count].egzas;
      cout <<"Kiek turi paz. (1-10)? "; cin>>n;

  cout << "Noredami pazymius suvesti patys, spauskite P; noredami pazymius sugeneruoti atsitiktiniu budu - spauskite A" << endl;
  cin >> gen;
  if (gen !="P" && gen != "A"){
     cout << "Ivesta klaidingai" << endl;}
      
  if (gen == "A"){
  int *newar;
  newar = new int [n];
  
  srand(time(0));
  for(int i=0; i<n; i++)
{
  int rnumber = rand()%10+1;
  newar[i] = rnumber;
}
  for(int j = 0; j < n; j++) // (you could use i as well, it would be another i
    {
    cout << newar[j] << "\n";
    }
  }

  if (gen == "P"){
  scores = new int[n];
  cout << "Iveskite studento namu darbu pazymius. Ivedus pazymi spauskite ENTER." << endl;
  for (int count = 0; count < n; count++){
    cout << "Iveskite " << (count + 1) << "-aji paz.: "; 
    cin >> scores[count];
    sum += scores[count];
    }
  }


for (int count = 0; count < n; count++){
        for (int j = 0; j < n - count - 1; j++)
          if (scores[j] < scores[j + 1])
			{
				t = scores[j];
				scores[j] = scores[j + 1];
				scores[j + 1] = t;
			}
  if (n%2 == 0) // if SIZE is even 
	{nums[count].median = (scores[n/2] + scores[n/2-1])/2.0;}
	else
    nums[count].median = scores[n/2];
   }
  nums[count].galut2 = nums[count].median*0.4 + nums[count].egzas*0.6;
      }

/*for (int count = 0; count < n; count++){
		sum += scores[count];}

    nums[count].galut2 = scores[count].sum / nums[count].n;
*/


  // Set output formatting.
	cout << "\n";
  cout << setw(20) << left << "Vardas"
  << setw(20) << left << "Pavarde"
  << setw(10) << left << "Galutinis (Med.) \n"
  << "-------------------------------------------------------";
  for (int count = 0; count < num_students; count++)
  {
    cout << fixed << setprecision(2) << "\n"
    << left << setw(20) << nums[count].vardas // nums[count].vardas
    << left << setw(20) << nums[count].pavarde
    << left << setw(10) << nums[count].galut2;
  }
  cout  << "\n";
		// Free dynamically allocated memory.
		delete[] nums;
		nums = 0;		// Make nums point to null.

////////////////////////////////////////////////////////////////
  
// Sukuriamas ir užpildomas failas "kursiokai.txt"
  ofstream MyFile("kursiokai.txt"); // Create and open a text file

  if (MyFile.is_open())   // Write to the file
  {
    MyFile << "Vardenis Pavardenis 8 9 10 6 10 9\n";
    MyFile << "Arvydas Arvydaitis 7 10 8 5 4 6";
    
  MyFile.close(); // Close the file
    }

  else cout << "Unable to open file";
  
  // Nuskaitomi ir pagal vardus surūšiuojami duomenys iš failo
vector<string> input; // Read data into vector
    ifstream MyReadFile("kursiokai.txt");
    if(!MyReadFile)  {
        cout << "Error opening file" << endl;
        return 0;
    }
    string x;
    while(getline(MyReadFile, x)) {
        input.push_back(x);
    }
    sort(input.begin(), input.end());
    for(const auto& s: input)
      cout << left << setw(17) << s << '\n';
  
  // Rezultatų išvedimas
  // Išimčių valdymas
std::ifstream readFile;
readFile.exceptions (std::ifstream::failbit | std::ifstream::badbit);
try{
    readFile.open("kursiokai.txt");
    readFile.close();
}
catch(std::ifstream::failure &readErr) {
    std::cerr << "\n\nException occured when reading a file\n"
              << readErr.what()
              << std::endl;

  return 0;
  }
}
