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
