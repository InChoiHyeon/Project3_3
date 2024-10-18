#include <iostream>
using namespace std;

class Dept {
public:
    int size;
    int* scores;

    Dept() {
        size = 10;
        scores = new int[size];
    }

    Dept(const Dept&) = delete;

    ~Dept() {
        delete[] scores;
    }

    void setScores(int size) {
        for (int i = 0; i < size; i++) {
            cin >> scores[i];
        }
    }

    bool isOver60(int index) {
        return scores[index] >= 60;
    }

    int countPass() {
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (isOver60(i)) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Dept com;

    cout << "10�� ���� �Է�>> ";
    com.setScores(10);

    cout << "60�� �̻��� " << com.countPass() << "�� �Դϴ�." << endl;

    return 0;
}
