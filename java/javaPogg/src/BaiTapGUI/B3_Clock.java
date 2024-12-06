package BaiTapGUI;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.Graphics;
import javax.swing.*;
import java.awt.event.*;
import java.util.Calendar;
import java.util.GregorianCalendar;

public class B3_Clock extends JFrame {
    private Clock clock;

    public B3_Clock() {
        this.clock = new Clock();
        add(clock);

        Timer time = new Timer(1000, new TimerListener());
        time.start();
    }

    private class TimerListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            clock.setCurrentTime();
            repaint();
        }
    }

    public static void main(String[] args) {
        B3_Clock cl = new B3_Clock();
        cl.setTitle("Clock");
        cl.setSize(400, 400);
        cl.setVisible(true);
        cl.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        cl.setLocationRelativeTo(null);
    
    }
}
