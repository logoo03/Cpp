struct node {
    int Data;
    node* Next;
};

typedef node* Nptr;

class listClass {
public:
    listClass();
    listClass(const listClass&);
    ~listClass();
    void Insert(int, int);
    void Delete(int);
    void Retrieve(int, int&);
    bool IsEmpty();
    int Length();
private:
    int Count;
    Nptr Head;
};

int main() {

    return 0;
}