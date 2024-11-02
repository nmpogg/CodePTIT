/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BaiTapGUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class B2_DrawShape extends JFrame {
    private String selectedColor = "Den";
    private String selectedShape = "Hinh Chu Nhat";
    private boolean isFilled = true;

    public B2_DrawShape() {
        setTitle("Shape Drawer");
        
        JPanel controlPanel = new JPanel();
        JComboBox<String> shapePicker = new JComboBox<>();
        shapePicker.addItem("Hinh Chu Nhat");
        shapePicker.addItem("Hinh Vuong");
        shapePicker.addItem("Hinh Tron");
        shapePicker.addItem("Hinh Da Giac");
        
        shapePicker.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                selectedShape = (String) shapePicker.getSelectedItem();
            }
            
        });
        
        JCheckBox fillCheckBox = new JCheckBox("Filled", true);
        fillCheckBox.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                isFilled = fillCheckBox.isSelected();
            }
            
        });

        JComboBox<String> colorPicker = new JComboBox<>();
        colorPicker.addItem("Den");
        colorPicker.addItem("Xanh Duong");
        colorPicker.addItem("Xanh La");
        colorPicker.addItem("Vang");
        colorPicker.addItem("Do");
        
        colorPicker.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                selectedColor = (String) colorPicker.getSelectedItem();
            }
            
        });

        controlPanel.add(new JLabel("Shape:"));
        controlPanel.add(shapePicker);
        controlPanel.add(fillCheckBox);
        controlPanel.add(colorPicker);

        // Panel vẽ
        DrawingPanel drawingPanel = new DrawingPanel();
        
        // Button vẽ
        JButton drawButton = new JButton("OK");
        drawButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                drawingPanel.repaint();
            }
        });

        controlPanel.add(drawButton);

        // Layout chính
        setLayout(new BorderLayout());
        add(controlPanel, BorderLayout.NORTH);
        add(drawingPanel, BorderLayout.CENTER);
    }

    public class DrawingPanel extends JPanel {
        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);
            if(selectedColor.equals("Do")) g.setColor(Color.red);
            else if(selectedColor.equals("Xanh Duong")) g.setColor(Color.blue);
            else if(selectedColor.equals("Xanh La")) g.setColor(Color.green);
            else if(selectedColor.equals("Vang")) g.setColor(Color.yellow);
            else g.setColor(Color.black);

            int width = 100;
            int height = 100;
            int x = getWidth() / 2 - width / 2;
            int y = getHeight() / 2 - height / 2;

            switch (selectedShape) {
                case "Hinh Chu Nhat":
                    if (isFilled) {
                        g.fillRect(x, y, width + 20, height - 20);
                    } else {
                        g.drawRect(x, y, width + 20, height - 20);
                    }
                    break;
                case "Hinh Vuong":
                    if (isFilled) {
                        g.fillRect(x, y, width, width);
                    } else {
                        g.drawRect(x, y, width, width);
                    }
                    break;
                case "Hinh Tron":
                    if (isFilled) {
                        g.fillOval(x, y, width, height);
                    } else {
                        g.drawOval(x, y, width, height);
                    }
                    break;
                case "Hinh Da Giac":
                    int[] xPoints = {x, x + width / 2, x + width, x + width / 2};
                    int[] yPoints = {y + height, y, y + height, y + height + 50};
                    if (isFilled) {
                        g.fillPolygon(xPoints, yPoints, 4);
                    } else {
                        g.drawPolygon(xPoints, yPoints, 4);
                    }
                    break;
            }
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            B2_DrawShape frame = new B2_DrawShape();
            frame.setSize(600, 500);
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setLocationRelativeTo(null);
            frame.setVisible(true);
        });
    }
}
