#include <cmath>
#include <iostream>




class electric_field
{	
	private:
	double *E;
	public:
	
	electric_field(double x, double y, double z)
	{
		E = new double [3];
		E[0] = x;
		E[1] = y;
		E[2] = z;
	}

	electric_field()
	{	
		E = new double[3];
		E[0] = 0.0;
		E[1] = 0.0;
		E[2] = 0.0;

		if (E == NULL)
 		std::cout<< "Fail alocation E is empty"<< std::endl;
		else
		std::cout<< "Electric field Memory correctly allocated"<< std::endl;
	}

	~electric_field()
	{
		delete[]E;
	}

	void setX(double x)
	{
       		E[0] = x;
	}
	double getX()
	{
        	return E[0];
	}


	void setY(double y)
	{
        	E[1] = y;
	}
	double getY()
	{
        	return E[1];
	}



	void setZ(double z)
	{
        	E[2] = z;
	}
	double getZ()
	{
        	return E[2];

	}
	
	double calculateMagnitude()
	{
        	double X = E[0]*E[0];
        	double Y = E[1]*E[1];
        	double Z = E[2]*E[2];

        	return sqrt(X+Y+Z);
	}
	   
	void calculateInnerProduct()
	{
        	double IP =  (E[0] * E[0]) + (E[1] * E[1]) + (E[2] * E[2]);
    		std::cout<<"Calculated Inner product: "<< IP<<std::endl;
	}

	
};

 




class magnetic_field
{
        private:
        double *M;
        public:

        magnetic_field(double x, double y, double z)
        {
                M = new double [3];
                M[0] = x;
                M[1] = y;
                M[2] = z;
        }

        magnetic_field()
        {
		M = new double [3];
                M[0] = 0.0;
                M[1] = 0.0;
                M[2] = 0.0;
		
                if (M == NULL)
                std::cout<< "Fail alocation M is empty"<< std::endl;
                else
                std::cout<< "Mag_field Memory correctly allocated"<< std::endl;
        }

        ~magnetic_field()
	{	
		delete[]M;

	}
	void setX(double x)
	{
        	M[0] = x;
	}
	double getX()
	{
        	return M[0];
	}


	void setY(double y)
	{
        	M[1] = y;
	}
	double getY()
	{
       		return M[1];
	}



	void setZ(double z)
	{
        	M[2] = z;
	}
	double getZ()
	{
        	return M[2];
	}
	double calculateMagnitude()
	{
        	double X = M[0]*M[0];
        	double Y = M[1]*M[1];
        	double Z = M[2]*M[2];

        	return sqrt(X+Y+Z);
	}
	
	void unitVector()
	{	
		double mag = calculateMagnitude();
		for (int i = 0; i < 3; i++) 
		{
    			double unit = M[i] / mag;
			std::cout << "Component " << i << ": " << unit << std::endl;
		}
	}	
};


