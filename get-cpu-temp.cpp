

td::string fileName = "/sys/class/thermal/thermal_zone0/temp";
std::ifstream piCpuTempFile;
float piCpuTemp = 0.0;
std::stringstream buffer;
piCpuTempFile.open(fileName);
buffer << piCpuTempFile.rdbuf();
piCpuTempFile.close();
piCpuTemp = std::stof(buffer.str()); // convert string to float
piCpuTemp = piCpuTemp / 1000; // convert float value to degree
piCpuTemp = roundf(piCpuTemp * 100) / 100; // round decimal to nearest      
std::cout << "CPU Temperature: " << piCpuTemp << "°C\n";
