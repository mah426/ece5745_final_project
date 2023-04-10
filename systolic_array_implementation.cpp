#include <iostream>
#include <vector>

using namespace std;

class SystolicArray {
private:
    int m, n, p;
    vector<vector<int>> A, B, C;
public:
    SystolicArray(int m_, int n_, int p_) {
        m = m_;
        n = n_;
        p = p_;
        A.resize(m, vector<int>(n));
        B.resize(n, vector<int>(p));
        C.resize(m, vector<int>(p));

    }
    void multiply() {
        vector<vector<int>> P(m, vector<int>(p, 0));
        for(int i=0; i<m; i++) {
            for(int j=0; j<p; j++) {
                for(int k=0; k<n; k++) {
                    P[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        C = P;
    }
    void printResult() {
        cout << "Result matrix C:" << endl;
        for(int i=0; i<m; i++) {
            for(int j=0; j<p; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {

    // Test case 1
    SystolicArray sa1(2, 3, 2);
    sa1.A = {{1, 2, 3}, {4, 5, 6}};
    sa1.B = {{7, 8}, {9, 10}, {11, 12}};
    sa1.multiply();
    sa1.printResult(); // expected output: [[58, 64], [139, 154]]

    // Test case 2
    SystolicArray sa2(3, 3, 3);
    sa2.A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sa2.B = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    sa2.multiply();
    sa2.printResult(); // expected output: [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

    // * BASIC MATRIX MATRIX MULTIPLICATION

    // hardcoded matrices
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> B = {{7, 8}, {9, 10}, {11, 12}};

    // get dimensions of matrices
    int n = A.size();
    int m = A[0].size();
    int p = B.size();
    int q = B[0].size();

    // check if the matrices can be multiplied together
    if (m != p) {
        cout << "Matrices cannot be multiplied together." << endl;
        return 0;
    }

    // perform matrix multiplication
    vector<vector<int>> C(n, vector<int>(q));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // print out the result
    cout << "The result of the matrix multiplication is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}