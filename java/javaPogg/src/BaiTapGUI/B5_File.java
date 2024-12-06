/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package BaiTapGUI;

/**
 *
 * @author Admin
 */
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.util.ArrayList;

public class B5_File extends JFrame {
    private JPanel imagePanel; 
    private ArrayList<BufferedImage> images = new ArrayList<>(); 

    public B5_File() {
        JButton selectImageButton = new JButton("Chọn ảnh");
        selectImageButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                selectAndDisplayImages();
            }
        });

        imagePanel = new JPanel();
        imagePanel.setLayout(new GridLayout(0, 3, 10, 10));
        JScrollPane scrollPane = new JScrollPane(imagePanel);

        add(selectImageButton, BorderLayout.NORTH);
        add(scrollPane, BorderLayout.CENTER);
    }

    private void selectAndDisplayImages() {
        JFileChooser fileChooser = new JFileChooser();
        fileChooser.setMultiSelectionEnabled(true); 
        fileChooser.setFileSelectionMode(JFileChooser.FILES_ONLY);

        int result = fileChooser.showOpenDialog(this);
        if (result == JFileChooser.APPROVE_OPTION) {
            File[] selectedFiles = fileChooser.getSelectedFiles();
            for (File file : selectedFiles) {
                try {
                    BufferedImage img = ImageIO.read(file);
                    images.add(img);
                    displayImage(img);
                } catch (IOException ex) {
                    ex.printStackTrace();
                    JOptionPane.showMessageDialog(this, "Không thể mở file: " + file.getName());
                }
            }
            imagePanel.revalidate(); 
        }
    }

    private void displayImage(BufferedImage img) {
        Image scaledImage = img.getScaledInstance(200, 200, Image.SCALE_SMOOTH); 
        JLabel label = new JLabel(new ImageIcon(scaledImage));
        imagePanel.add(label); 
    }

    public static void main(String[] args) {
        B5_File view = new B5_File();
        view.setTitle("Image");
        view.setSize(800, 600);
        view.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        view.setLocationRelativeTo(null);
        view.setVisible(true);
    }
}
