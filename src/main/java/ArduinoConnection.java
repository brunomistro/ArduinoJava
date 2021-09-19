import com.fazecast.jSerialComm.SerialPort;

public class ArduinoConnection {

	SerialPort serialPort;
	
	public ArduinoConnection(SerialPort serial) {
		this.serialPort = serial;
	}
	
	
}
