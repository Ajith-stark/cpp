#ifndef MYCLASS_H
#define MYCLASS_H
	class base{
	  private:
	    int data=90;
	    
	  public:
	  	base();
	    ~base();

	    base(int);
	   virtual void print()=0;
	    void say();
	    
	  protected:
	    
	    
	};

	class derived: public base
	{
		int data=120;
	public:
		derived();
		~derived();

		derived(int);
		void print();
		
	};
	 
#endif