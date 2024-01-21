#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

void calculateWaveSpeed() {
   double frequency, wavelength;
   cout << "Enter frequency (in Hz): ";
   cin >> frequency;
   cout << "Enter wavelength (in meters): ";
   cin >> wavelength;
   double waveSpeed = frequency * wavelength;
   cout << "Wave Speed: " << waveSpeed << " m/s" << endl << endl;
}

void calculatePotentialEnergy() {
   double mass, height;
   const double g = 9.81;
   cout << "Enter mass (in kg): ";
   cin >> mass;
   cout << "Enter height (in meters): ";
   cin >> height;
   double potentialEnergy = mass * g * height;
   cout << "Potential Energy: " << potentialEnergy << " Joules" << endl << endl;
}

void calculateAcceleration() {
   double initialVelocity, finalVelocity, time;
   cout << "Enter initial velocity (in m/s): ";
   cin >> initialVelocity;
   cout << "Enter final velocity (in m/s): ";
   cin >> finalVelocity;
   cout << "Enter time (in seconds): ";
   cin >> time;
   double acceleration = (finalVelocity - initialVelocity) / time;
   cout << "Acceleration: " << acceleration << " m/s²" << endl << endl;
}

void calculateWorkDone() {
   double force, displacement;
   cout << "Enter force (in Newtons): ";
   cin >> force;
   cout << "Enter displacement (in meters): ";
   cin >> displacement;
   double workDone = force * displacement;
   cout << "Work Done: " << workDone << " Joules" << endl << endl;
}

void calculatePower() {
   double work, time;
   cout << "Enter work (in Joules): ";
   cin >> work;
   cout << "Enter time (in seconds): ";
   cin >> time;
   double power = work / time;
   cout << "Power: " << power << " Watts" << endl << endl;
}

void calculateTorque() {
   double force, distance;
   cout << "Enter force (in Newtons): ";
   cin >> force;
   cout << "Enter lever arm distance (in meters): ";
   cin >> distance;
   double torque = force * distance;
   cout << "Torque: " << torque << " N.m" << endl << endl;
}

void calculatePressure() {
   double force, area;
   cout << "Enter force (in Newtons): ";
   cin >> force;
   cout << "Enter area (in square meters): ";
   cin >> area;
   double pressure = force / area;
   cout << "Pressure: " << pressure << " Pascals" << endl << endl;
}

void calculateCentripetalForce() {
   double mass, velocity, radius;
   cout << "Enter mass (in kg): ";
   cin >> mass;
   cout << "Enter velocity (in m/s): ";
   cin >> velocity;
   cout << "Enter radius (in meters): ";
   cin >> radius;
   double centripetalForce = mass * pow(velocity, 2) / radius;
   cout << "Centripetal Force: " << centripetalForce << " Newtons" << endl << endl;
}

void calculateRadioactiveDecay() {
   double initialAmount, decayConstant, time;
   cout << "Enter initial amount of substance: ";
   cin >> initialAmount;
   cout << "Enter decay constant (in 1/s): ";
   cin >> decayConstant;
   cout << "Enter time (in seconds): ";
   cin >> time;
   double remainingAmount = initialAmount * exp(-decayConstant * time);
   cout << "Remaining Amount: " << remainingAmount << endl << endl;
}

void calculateTimeDilation() {
    double timeInterval, velocity;
    const double c = 3e8;
    cout << "Enter time interval (in seconds): ";
    cin >> timeInterval;
    cout << "Enter velocity (in m/s): ";
    cin >> velocity;
    double dilatedTime = timeInterval / sqrt(1 - pow(velocity / c, 2));
    cout << "Dilated Time: " << dilatedTime << " seconds" << endl;
}


void calculateHarmonicMotion() {
   double mass, springConstant;
   cout << "Enter mass (in kg): ";
   cin >> mass;
   cout << "Enter spring constant (in N/m): ";
   cin >> springConstant;
   double angularFrequency = sqrt(springConstant / mass);
   cout << "Angular Frequency: " << angularFrequency << " rad/s" << endl << endl;
}

void calculateLensEquation() {
   double objectDistance, imageDistance, focalLength;
   cout << "Enter object distance (in meters): ";
   cin >> objectDistance;
   cout << "Enter image distance (in meters): ";
   cin >> imageDistance;
   focalLength = 1 / ((1 / objectDistance) + (1 / imageDistance));
   cout << "Focal Length: " << focalLength << " meters" << endl << endl;
}

void calculateMagneticField() {
   double current, distance;
   const double mu0 = 4 * M_PI * 1e-7;
   cout << "Enter current (in Amperes): ";
   cin >> current;
   cout << "Enter distance (in meters): ";
   cin >> distance;
   double magneticField = mu0 * current / (2 * M_PI * distance);
   cout << "Magnetic Field: " << magneticField << " T" << endl << endl;
}

void calculateElectricField() {
   double charge, distance;
   const double k = 8.9875517873681764e9;
   cout << "Enter charge (in Coulombs): ";
   cin >> charge;
   cout << "Enter distance (in meters): ";
   cin >> distance;
   double electricField = k * charge / pow(distance, 2);
   cout << "Electric Field: " << electricField << " N/C" << endl << endl;
}

void calculateAngularMomentum() {
   double momentOfInertia, angularVelocity;
   cout << "Enter moment of inertia (in kg.m^2): ";
   cin >> momentOfInertia;
   cout << "Enter angular velocity (in rad/s): ";
   cin >> angularVelocity;
   double angularMomentum = momentOfInertia * angularVelocity;
   cout << "Angular Momentum: " << angularMomentum << " kg.m^2/s" << endl << endl;
}

int main() {
   int choice;

   cout << fixed << setprecision(2);

   while (true) {
      cout << "\n\nPhysics Calculator" << endl;
      cout << "1. Wave Speed" << endl;
      cout << "2. Potential Energy" << endl;
      cout << "3. Acceleration" << endl;
      cout << "4. Work Done" << endl;
      cout << "5. Power" << endl;
      cout << "6. Torque" << endl;
      cout << "7. Pressure" << endl;
      cout << "8. Centripetal Force" << endl;
      cout << "9. Radioactive Decay" << endl;
      cout << "10. Time Dilation" << endl;
      cout << "11. Harmonic Motion" << endl;
      cout << "12. Lens Equation" << endl;
      cout << "13. Magnetic Field" << endl;
      cout << "14. Electric Field" << endl;
      cout << "15. Angular Momentum" << endl;
      cout << "16. Exit" << endl;
      cout << "Enter your choice: " << endl;
      cin >> choice;
      cout << "                   " << endl;

      switch (choice) {
      case 1:
         calculateWaveSpeed();
         break;
      case 2:
         calculatePotentialEnergy();
         break;
      case 3:
         calculateAcceleration();
         break;
      case 4:
         calculateWorkDone();
         break;
      case 5:
         calculatePower();
         break;
      case 6:
         calculateTorque();
         break;
      case 7:
         calculatePressure();
         break;
      case 8:
         calculateCentripetalForce();
         break;
      case 9:
         calculateRadioactiveDecay();
         break;
      case 10:
         calculateTimeDilation();
         break;
      case 11:
         calculateHarmonicMotion();
         break;
      case 12:
         calculateLensEquation();
         break;
      case 13:
         calculateMagneticField();
         break;
      case 14:
         calculateElectricField();
         break;
      case 15:
         calculateAngularMomentum();
         break;
      case 16:
         return 0;
      default:
         cout << "Invalid choice!" << endl;
      }
   }

   return 0;
}
