import java.io.PrintWriter;

import com.fazecast.jSerialComm.SerialPort;

public class ArduinoConnection {
    PrintWriter writer;
    SerialPort port = SerialPort.getCommPort("COM11");

    public ArduinoConnection() {
        writer = new PrintWriter(port.getOutputStream());
    }

    public void mudaValorLed(int lampada) {
        if(port.openPort()) {
        	writer.print(Integer.toString(lampada));
            writer.flush();
            port.closePort();
        }
        
        else {
        	System.out.println("Não conseguimos conectar com o arduino");
        }
    }
}
