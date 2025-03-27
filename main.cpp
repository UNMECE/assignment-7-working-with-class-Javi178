#include "E_M_F.cpp"    

int main()
{
	electric_field E_default;
	electric_field E_components(1e5, 10.9,1.7e2);
	 	

	electric_field E_comp(2,6,5);
	E_default.setX(2);
	E_default.setY(6);
	E_default.setZ(5);
	
	magnetic_field M_default;
        magnetic_field M_comp(10,8,4);
        M_default.setX(2);
        M_default.setY(6);
        M_default.setZ(5);


	E_default.calculateInnerProduct();
	std::cout << "E_default Magnitude: " << E_default.calculateMagnitude() << std::endl;
	std::cout << "M_default Magnitude: " << M_default.calculateMagnitude() << std::endl;


	M_comp.unitVector();


	return 0;



}
