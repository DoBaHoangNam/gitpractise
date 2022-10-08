import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class Main {

    public static void main(String[] args)
    {
	    Swing_Arithmetics swing_arithmetics = new Swing_Arithmetics();
    }
}
public class Swing_Arithmetics implements ActionListener {
    private static JLabel num1Label, num2Label, resultLabel;
    private static JTextField num1Text, num2Text, resultText;
    private static JButton addButton, subtractButton, multiplyButton, divideButton, percentageButton, clearButton;

    {
        //Creating panel
        JPanel panel = new JPanel();

        //Creating frame
        JFrame frame = new JFrame();
        frame.setTitle("Swing Arithmetics");
        frame.setSize(300,300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        frame.add(panel);
        panel.setLayout(null);

        //Creating label
        num1Label = new JLabel("First Number");
        num2Label = new JLabel("Second Number");
        resultLabel = new JLabel("Result");

        num1Label.setBounds(10,20,100,30);
        num2Label.setBounds(9, 50 ,100, 30);
        resultLabel.setBounds(10, 80, 70, 30);

        panel.add(num1Label);
        panel.add(num2Label);
        panel.add(resultLabel);

        //Creating text field
        num1Text = new JTextField();
        num2Text = new JTextField();
        resultText = new JTextField();

        num1Text.setBounds(120,20,100,30);
        num2Text.setBounds(120,50,100,30);
        resultText.setBounds(120,80,100,30);

        panel.add(num1Text);
        panel.add(num2Text);
        panel.add(resultText);

        //Creating button
        addButton = new JButton("+");
        subtractButton = new JButton("-");
        multiplyButton = new JButton("*");
        divideButton = new JButton("/");
        percentageButton = new JButton("%");
        clearButton = new JButton("Clear");

        addButton.setBounds(10, 110, 100, 30);
        subtractButton.setBounds(120,110,100,30);
        multiplyButton.setBounds(10,140,100,30);
        divideButton.setBounds(120,140,100,30);
        percentageButton.setBounds(10,170,100,30);
        clearButton.setBounds(120, 170, 100, 30);

        panel.add(addButton);
        panel.add(subtractButton);
        panel.add(multiplyButton);
        panel.add(divideButton);
        panel.add(percentageButton);
        panel.add(clearButton);

        addButton.addActionListener(this);
        subtractButton.addActionListener(this);
        multiplyButton.addActionListener(this);
        divideButton.addActionListener(this);
        percentageButton.addActionListener(this);
        clearButton.addActionListener(this);


        frame.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e)
    {
        //1
        double number1 = 0, number2 = 0;

        //2
        try
        {
            number1 = Double.parseDouble(num1Text.getText());
            number2 = Double.parseDouble(num2Text.getText());
        }
        catch (Exception error)
        {
            error.printStackTrace();
        }

        //3
        if (e.getSource() == addButton)
        {
            resultText.setText(String.valueOf(number1 + number2));
        }
        else if (e.getSource() == subtractButton)
        {
            resultText.setText(String.valueOf(number1 - number2));
        }
        else if (e.getSource() == multiplyButton)
        {
            resultText.setText(String.valueOf(number1 * number2));
        }
        else if (e.getSource() == divideButton)
        {
            resultText.setText(String.valueOf(number1 / number2));
        }
        else if (e.getSource() == percentageButton)
        {
            resultText.setText(String.valueOf(number1 * (number2 / 100)));
        }
        else  if (e.getSource() == clearButton)
        {
            resultText.setText(String.valueOf(""));
            num2Text.setText(String.valueOf(""));
            num1Text.setText(String.valueOf(""));
        }
    }
}
