//.h file code:

#include <string>
#include <vector>
#include <iostream>
class DynamicArray
{

public:
    std::vector<int> seq = std::vector<int>();
    std::vector<std::vector<int>> seqList = std::vector<std::vector<int>>();
    int lastAns = 0;

    DynamicArray(int N);

    virtual void appendValue(int x, int y, int N);

    void printValue(int x, int y, int N);

   // void main(std::vector<std::wstring> &args);

};

//.cpp file code:

DynamicArray::DynamicArray(int N)
{
    for (int i = 0; i < N; i++)
    {
        seq = std::vector<int>();
        seqList.push_back(seq);
    }
}

void DynamicArray::appendValue(int x, int y, int N)
{
    int rowIndex = (x ^ lastAns) % N;
    std::vector<int> seq = seqList[rowIndex];
    seq.push_back(y);
}

void DynamicArray::printValue(int x, int y, int N)
{
    int colIndex = 0;
    int rowIndex = (x ^ lastAns) % N;
    std::vector<int> seq = seqList[rowIndex];
    colIndex = y % seq.size();
    lastAns = seq[colIndex];
    std::wcout << lastAns << std::endl;
}

int main()
{
    int N ;
    int Q ;
    std::cin>>N>>Q;
    DynamicArray *da = new DynamicArray(N);
    for (int i = 0; i < Q; i++)
    {
        int queryType;
        int x;
        int y;
        std::cin>>queryType>>x>>y;
        if (queryType == 1)
        {
            da->appendValue(x, y, N);
        }
        else
        {
            da->printValue(x, y, N);
        }

    }
    return 0;
}
