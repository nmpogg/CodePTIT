package BaiTapGUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class B4_Calculator extends JFrame implements ActionListener {
    private JTextField display;
    private double result;
    private String operator;
    private boolean isOperatorClicked;

    public B4_Calculator() {
        setTitle("Calculator");
        setSize(300, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        display = new JTextField();
        display.setEditable(false);
        display.setHorizontalAlignment(SwingConstants.RIGHT);
        add(display, BorderLayout.NORTH);

        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(5, 4, 5, 5));

        String[] buttons = {
            "AC", "SQRT", "^", "/",
            "7", "8", "9", "*",
            "4", "5", "6", "-",
            "1", "2", "3", "+",
            "0", ".", "", "="
        };

        for(String text : buttons){
            JButton button = new JButton(text);
            button.addActionListener(this);
            panel.add(button);
        }

        add(panel, BorderLayout.CENTER);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String command = e.getActionCommand();

        if (command.matches("[0-9]") || command.equals(".")) {
            if (isOperatorClicked) {
                display.setText("");
                isOperatorClicked = false;
            }
            display.setText(display.getText() + command);
        } else if (command.equals("AC")) {
            display.setText("");
            result = 0;
            operator = "";
        } else if (command.equals("=")) {
            calculate(Double.parseDouble(display.getText()));
            display.setText(String.valueOf(result));
            operator = "";
        } else if (command.equals("SQRT")) {
            double value = Double.parseDouble(display.getText());
            result = Math.sqrt(value);
            display.setText(String.valueOf(result));
        } else if (command.equals("^")) {
            result = Double.parseDouble(display.getText());
            operator = "^";
            isOperatorClicked = true;
        } else {
            if (!operator.isEmpty()) {
                calculate(Double.parseDouble(display.getText()));
                display.setText(String.valueOf(result));
            } else {
                result = Double.parseDouble(display.getText());
            }
            operator = command;
            isOperatorClicked = true;
        }
    }

    private void calculate(double number) {
        switch (operator) {
            case "+": result += number; break;
            case "-": result -= number; break;
            case "*": result *= number; break;
            case "/": 
                if (number != 0) result /= number; 
                else display.setText("Error");
                break;
            case "^": result = Math.pow(result, number); break;
        }
    }

    public static void main(String[] args) {
        B4_Calculator calculator = new B4_Calculator();
        calculator.setVisible(true);
    }
}
