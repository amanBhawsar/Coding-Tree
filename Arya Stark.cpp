/*
Arya Stark and Sansa Stark are sisters but often fight with each other for one or the other reason. Recently, Sansa beat Arya by cheating in the hunt game and made fun of her. Arya is full of anger and wants to take her revenge. Arya has called her elder sister Sansa for battle and Sansa has accepted it.

The battle consists of R rounds where in each round a different skill will be put to test. The skill may be Archery, Sword fighting or anything else. After each round, the winner of the round will be awarded a point. After all the R rounds are conducted, the one with maximum points is considered as the overall Winner.

Arya is angry and wants not just to win the battle but beat Sansa in such a way that after each round her points are atleast P times the points of Sansa. She is busy preparing for the battle and has heard about your skills. She wants you to find the number of ways in which she can beat Sansa with the provided condition and take her revenge.
The order of winning differentiates the different ways.

Example: Let's consider, there are 3 rounds.

Case 1: Arya won the first round, Sansa the second round and Arya the third round
Arya , Sansa , Arya

Case 2: Arya won the first round, Arya also won the second round and Sansa won the third round
Arya , Arya , Sansa

Both the cases above are different from each other and are considered two different ways.
Note: Since the answer can be large, take modulo by 10^9 + 7.
Input Format
The first line of input consists of number of test cases, T
The only line of each test case consists of two space separated integers R and P.

Constraints
1<= T <=10
1<= R <=1000
1<= P <=R

Output Format
For each test case, print the number of ways possible in a separate line.

Sample TestCase 1
Input
2
4 2
2 2
Output
3
1

Explanation
Test Case 1:

There are three ways in which Arya can win with the given condition

WAY 1: First three rounds are won by Arya and Last round is won by Sansa

Arya , Arya , Arya , Sansa

WAY 2: First two rounds are won by Arya. Third Round is won by Sansa and last Round is won by Arya.

Arya , Arya , Sansa , Arya

WAY 3: All the four rounds are won by Arya.

Arya , Arya , Arya , Arya

Test Case 2: There is only one way of winning in this case i.e if Arya wins both the rounds.

Arya , Arya
*/
#include <iostream>
using namespace std;
int r,p;
int fight(int aryaWins, int sansaWins, int possibilities) {
    if (aryaWins < sansaWins * p) {
        return possibilities;
    }
    if (aryaWins + sansaWins == r) {
        possibilities += 1;
        return possibilities;
    }
    return fight(aryaWins + 1, sansaWins, possibilities) + fight(aryaWins, sansaWins + 1, possibilities);
}

int main() {
	int t;
	cin >>t;
	while(t--){
		cin >> r >> p;
		int totalPossibilities = fight(p, 0, 0, p, r);
		cout << totalPossibilities << endl;
	}
	return 0;
}