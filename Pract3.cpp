  #include<iostream>
  #include<cstring>
  using namespace std;
  class publication
  {
  public:
    char title[25];
    float price;
    publication()
    {
    strcpy(title,"Mission Impossible");
    price=250.50;
    }
    
    void getdata()
    {
    cout<<"\n enter the name :";
    cin>>title;
    cout<<"\n enter the price :";
    cin>>price;
    }
    void putdata()
    { 
    cout<<"\n Name of publication is:"<<title;
    cout<<"\n price of publication is:"<<price;
    }
  };
  
  class book:public publication
  {
    public:
    int pages;
    book()
    {
    pages=201;
    }
    void getdata_b()
    {
    getdata();
    cout<<"\n Enter the pages:";
    cin>>pages;
    }
    void putdata_b()
    { 
    putdata();
    
    cout<<"\n Total Pages:"<<pages;
    }
    
  };
    
  class Tape:public publication
  {
    public:
    
    int min;
    Tape()
    { 
      min=12.16;
    }
    void getdata_t()
    {
      getdata();
      cout<<"\nEnter the time of the tape:";
      cin>>min;
    }
    
    void putdata_t()
    {
      putdata();
      cout<<"\nPlaying Time of the tape is:"<<min;
    } 
    };
    
    
  int main()
  {
    
    book d,ob11;
    Tape e,ob12;
    d.putdata_b();
    e.putdata_t();
    ob11.getdata_b();
    ob11.putdata_b();
    ob12.getdata_t();
    ob12.putdata_t();
    
    return 0;
  }   
      
        
        
