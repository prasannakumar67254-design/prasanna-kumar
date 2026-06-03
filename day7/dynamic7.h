#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template<typename T>
class ScoreManager
{
private:
    vector<T> scores;

public:
    void addscore(T score)
    {
        scores.push_back(score);
    }

    T getaverage()
    {
        if (scores.empty())
            return T();

        T sum = T();

        for (const auto& s : scores)
        {
            sum += s;
        }

        return sum / scores.size();
    }

    T getHighest()
    {
        return *max_element(scores.begin(), scores.end());
    }

    T getLowest()
    {
        return *min_element(scores.begin(), scores.end());
    }

    void display() const
    {
        cout << "Scores: ";

        for (T s : scores)
            cout << s << " ";

        cout << endl;
    }

    int getCount() const
    {
        return scores.size();
    }
};

int main()
{
    ScoreManager<int> mathScores;

    mathScores.addscore(85);
    mathScores.addscore(92);
    mathScores.addscore(78);
    mathScores.addscore(95);
    mathScores.addscore(88);

    cout << "== math scores(int) ==" << endl;
    mathScores.display();
    cout << "Average: " << mathScores.getaverage() << endl;
    cout << "Highest: " << mathScores.getHighest() << endl;
    cout << "Lowest: " << mathScores.getLowest() << endl;
    cout << "Count: " << mathScores.getCount() << endl;

    ScoreManager<double> scienceScores;

    scienceScores.addscore(89.5);
    scienceScores.addscore(94.2);
    scienceScores.addscore(91.8);

    cout << "\n== science scores(double) ==" << endl;
    scienceScores.display();
    cout << "Average: " << scienceScores.getaverage() << endl;
    cout << "Highest: " << scienceScores.getHighest() << endl;
    cout << "Lowest: " << scienceScores.getLowest() << endl;
    cout << "Count: " << scienceScores.getCount() << endl;

    return 0;
}