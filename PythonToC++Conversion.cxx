#include <iostream>//header
#include <string>

using namespace std;

int main(){
string a;

cout << "Enter your word: ";
cin >> a;

if(a == "ALGORITHM"){
    cout << "A step-by step procedure or formula for solving a problem, often used in computer programming and automation.";
}else if(a == "BEAM"){  
    cout<<"A structural element that primarily resists loads applied laterally to its axis, commonly used in construction.";  
}else if(a == "COMPUTER AIDED DESIGN"){  
    cout<<"The use of computer software to create, modify, analyze, or optimize designs in engineering and architecture.";  
}else if(a == "COMPRESSIVE STRENGTH"){  
    cout<<"The capacity of a material to withstand axial compressive forces without failing.";  
}else if(a == "CIRCUIT"){  
    cout<<"A complete, closed path through which electric current can flow.";  
}else if(a == "CORROSION"){  
    cout<<"The gradual destruction of materials (usually metals) by chemical or electrochemical reaction with their environment.";  
}else if(a == "DIELECTRIC"){  
    cout<<"A material that does not conduct electricity but can store electrical energy through polarization.";  
}else if(a == "EFFICIENCY"){  
    cout<<"The ratio of useful output to total input in any system, often expressed as a percentage.";  
}else if(a == "FINITE ELEMENT ANALYSIS"){  
    cout<<"A numerical method for predicting how a product reacts to real-world forces, vibration, heat, and other physical effects.";  
}else if(a == "FLUID DYNAMICS"){  
    cout<<"The study of the behavior of fluids (liquids and gases) in motion.";  
}else if(a == "GEAR"){  
    cout<<"A rotating mechanical component with cut teeth or cogs that mesh with another gear to transmit torque.";  
}else if(a == "HVAC"){  
    cout<<"(Heating, Ventilation, and Air Conditioning). A system used to provide heating, cooling, and air quality control in buildings.";  
}else if(a == "INDUCTOR"){  
    cout<<"An electrical component that stores energy in a magnetic field when electric current flows through it.";  
}else if(a == "KINEMATICS"){  
    cout<<"The study of motion without considering the forces that cause it.";  
}else if(a == "LOAD"){  
    cout<<"The external force or forces applied to a structure or component.";  
}else if(a == "MECHATRONIX"){  
    cout<<"An interdisciplinary branch of engineering that combines mechanical, electrical, computer, and control engineering.";  
}else if(a == "NANOTECHNOLOGY"){  
    cout<<"The manipulation of matter on an atomic or molecular scale, typically below 100 nanometers.";  
}else if(a == "OHM'S LAW"){  
    cout<<"A fundamental principle of electrical circuits stating that voltage equals current multiplied by resistance (V = I × R).";  
}else if(a == "PNEUMATICS"){  
    cout<<"The use of compressed air to perform mechanical work.";  
}else if(a == "POWER"){  
    cout<<"The rate at which work is done or energy is transferred, measured in watts.";  
}else if(a == "RESISTOR"){  
    cout<<"An electrical component that limits or regulates the flow of electric current in a circuit.";  
}else{  
    cout<<"No word is found";  
}  

return 0;

}