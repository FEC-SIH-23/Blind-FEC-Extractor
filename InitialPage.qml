import QtQuick 2.9
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3
import QtQuick.Dialogs


Item {
    id: initialPage
    property alias inputText: textField.text
        Rectangle {
            id: rect1
            color: "#333"
            height: parent.height
            width: parent.width

            Text {
                id: mainHeading
                text: "FEC Encoding Detector"
                font.pixelSize: 96/2
                color: "#d6cbc2"
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                anchors.verticalCenterOffset: -50 * 2 // Adjust this value as needed
            }

            TextField {
                id: textField
                color: "#1E1A1D"
                placeholderText: "Enter a Message String"
                placeholderTextColor: "#333"
                onTextChanged: window.inputText = text
                anchors.top: mainHeading.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenterOffset: 50  // Adjust this value as needed
                background: Rectangle {
                    radius: 5
                    implicitWidth: (100) * 8
                    implicitHeight: (24) * 4
                    color: "#C7D3BF"
                }
                font.pixelSize: 16 // Increase the pixel size to increase the text size
            }

            RowLayout {
                id: buttonGroup
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.top: textField.bottom
                spacing: 10

                AnalysisButton {
                    id: analysisButton
                    anchors.topMargin: 10
                    buttonText: "Analysis"
                    Layout.topMargin: 10
                    imageSource: "analyse.svg"
                    uploadFlag: 0
                }

                AnalysisButton {
                    id: uploadButton
                    anchors.leftMargin: 10
                    color: "green"
                    buttonText: "Upload"
                    Layout.topMargin: 10
                    imageSource: "upload.svg"
                    uploadFlag: 1
                }
            }
        }
}