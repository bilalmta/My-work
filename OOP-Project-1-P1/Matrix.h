#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
    public:
        Matrix();
        Matrix(int R,int C);
        void setSize(int R,int C);
        virtual ~Matrix();
    protected:
    private:
        vector < vector <double> > Mat(0, vector<double> (0) );
};

#endif // MATRIX_H
