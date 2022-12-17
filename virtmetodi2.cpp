
class Animal
{
private:
    char Name[15]; 
public:
    void SetName(char *s)
{
    strcpy(Name, s);
}
    void GetName(char * s)
{
    strcpy(s, Name);
}
    virtual int weight();
    int Static(int H);
};
 
class Dog : public Animal
{
private:
    int height; 
public:
    Dog();
    void SetHeight(int h)
{
    height = h;
}
    int weight()
{
    return 10 * height * heigth;
}
};