class Student:public Person{
	private:
        vector<int> testScores;
        int sum=0;
        double avg=0.0;
    public:
       Student(string firstName, string lastName, int idS, vector<int> scores): Person(firstName,lastName,idS){
            this->testScores=scores;
        }
      char calculate()
        {
            int n=testScores.size();
            char c;
            for(unsigned int i=0; i<n; ++i){
                sum+=testScores[i];
            }
            avg=sum/n;
            if(avg>=90 && avg<=100)
                    c='O';
            else if(avg>=80 && avg<=90)
                    c='E';
            else if(avg>=70 && avg<=80)
                    c='A';
            else if(avg>=55 && avg<=75)
                    c='P';
            else if(avg>=40 && avg<=55)
                    c='D';
            else if(avg<40)
                    c='T';
            return c;
        }
};

