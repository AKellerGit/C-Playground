Matrix::Matrix() {

	std::cout << "We will collect information regarding 2 matrices. You can add more later if needed. \nThis matrix has a row count of ";
	std::cin >> dimx;
	std::cout << "\nand this matrix has a column count of ";
	std::cin >> dimy;
	matrixSize = dimx * dimy;
	std::cout << "Okay, then this matrix has " << dimx << " rows and " << dimy << "columns. Thus, " << matrixSize << " components\n\n";

	M.resize(dimx, std::vector<int>(dimy));
}

Matrix::Matrix(unsigned int x, unsigned int y) {
	dimx = x;
	dimy = y;
	matrixSize = dimx * dimy;
	M.resize(dimx, std::vector<int>(dimy));
}


void Add(Matrix m1, Matrix m2) {

	Matrix Sum(m1.GetDimX(), m1.GetDimY());

	if (isValid(m1, m2)) {
		for (int i = 0; i < m1.M.size(); i++) {
			for (int j = 0; j < m1.M[i].size(); j++) {
				Sum.M[i][j] = m1.M[i][j] + m2.M[i][j];
			}
		}
		Sum.showMatrix();
	}
	else
		std::cout << "\nsizes do not match: resize matrix size.\n\n";
}

void Subtract(Matrix m1, Matrix m2) {
	Matrix Sum(m1.GetDimX(), m1.GetDimY());

	if (isValid(m1, m2)) {
		for (int i = 0; i < m1.M.size(); i++) {
			for (int j = 0; j < m1.M[i].size(); j++) {
				Sum.M[i][j] = m1.M[i][j] - m2.M[i][j];
			}
		}
		Sum.showMatrix();
	}
	else
		std::cout << "\nsizes do not match: resize matrix size.\n\n";
}

void Matrix::Multiply() {

}

void Matrix::ColumnSpace() {

}

void Matrix::RowSpace() {

}

void Matrix::NullSpace() {

}


void Matrix::InputComponentsMatrix() {
	int newComp;

	for (int i = 0; i < M.size(); i++) {
		for (int j = 0; j < M[i].size(); j++) {
			std::cout << "input row " << i << " column " << j << ": ";
			std::cin >> newComp;
			M[i][j] = newComp;
		}
	}

}

bool isValid(Matrix m1, Matrix m2) {

	if (m1.GetDimX() == m2.GetDimX() && m1.GetDimY() == m2.GetDimY()) {
		return true;
	}

	std::cout << "False";
	return false;
}
	

unsigned int Matrix::GetSize() {
	return matrixSize;
}

unsigned int Matrix::GetDimX() {
	return dimx;
}

unsigned int Matrix::GetDimY() {
	return dimy;
}


void Matrix::showMatrix() {
	for (auto vec : M)
	{
		std::cout << "[ ";
		for (auto x : vec)
			std::cout << x << " ";
		std::cout << "]"; std::cout << std::endl;
	}
}