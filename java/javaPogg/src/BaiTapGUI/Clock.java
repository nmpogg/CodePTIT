/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BaiTapGUI;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.util.Calendar;
import java.util.GregorianCalendar;
import javax.swing.JPanel;

/**
 *
 * @author Admin
 */
public class Clock extends JPanel {
    private int hour;
    private int minute;
    private int second;

    /** Construct a default clock with the current time */
    public Clock() {
        setCurrentTime();
    }

    /** Draw the clock */
    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        // Initialize clock parameters
        int clockRadius = (int)(Math.min(getWidth(), getHeight()) * 0.3);
        int xCenter = getWidth() / 2;
        int yCenter = getHeight() / 3;

        // Draw circle
        g.setColor(Color.black);
        g.drawOval(xCenter - clockRadius, yCenter - clockRadius, 2 * clockRadius, 2 * clockRadius);
        g.drawString("12", xCenter - 5, yCenter - clockRadius + 15);
        g.drawString("9", xCenter - clockRadius + 5, yCenter + 5);
        g.drawString("3", xCenter + clockRadius - 10, yCenter + 5);
        g.drawString("6", xCenter - 3, yCenter + clockRadius - 5);

        // Draw second hand
        int sLength = (int)(clockRadius * 0.8);
        int xSecond = (int)(xCenter + sLength * Math.sin(second * (2 * Math.PI / 60)));
        int ySecond = (int)(yCenter - sLength * Math.cos(second * (2 * Math.PI / 60)));
        g.setColor(Color.red);
        g.drawLine(xCenter, yCenter, xSecond, ySecond);

        // Draw minute hand
        int mLength = (int)(clockRadius * 0.65);
        int xMinute = (int)(xCenter + mLength * Math.sin(minute * (2 * Math.PI / 60)));
        int yMinute = (int)(yCenter - mLength * Math.cos(minute * (2 * Math.PI / 60)));
        g.setColor(Color.blue);
        g.drawLine(xCenter, yCenter, xMinute, yMinute);

        // Draw hour hand
        int hLength = (int)(clockRadius * 0.5);
        int xHour = (int)(xCenter + hLength * Math.sin((hour % 12 + minute / 60.0) * (2 * Math.PI / 12)));
        int yHour = (int)(yCenter - hLength * Math.cos((hour % 12 + minute / 60.0) * (2 * Math.PI / 12)));
        g.setColor(Color.BLACK);
        g.drawLine(xCenter, yCenter, xHour, yHour);

        String timeString = String.format("%02d:%02d:%02d", hour, minute, second);
        g.setColor(Color.black);
        g.drawString(timeString, xCenter - 30, yCenter + clockRadius + 50);
    }

    public void setCurrentTime() {
        // Lấy thời gian hiện tại
        Calendar calendar = new GregorianCalendar();
        this.hour = calendar.get(Calendar.HOUR_OF_DAY);
        this.minute = calendar.get(Calendar.MINUTE);
        this.second = calendar.get(Calendar.SECOND);
    }

    @Override
    public Dimension getPreferredSize() {
        return new Dimension(400, 400);
    }
}