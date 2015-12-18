object Form1: TForm1
  Left = 187
  Top = 235
  Width = 998
  Height = 539
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 982
    Height = 332
    Align = alClient
    BorderWidth = 30
    TabOrder = 0
    object ListView1: TListView
      Left = 31
      Top = 31
      Width = 920
      Height = 270
      Align = alClient
      Columns = <
        item
          AutoSize = True
          Caption = #1052#1072#1090#1077#1088#1080#1072#1083
        end
        item
          AutoSize = True
          Caption = #1058#1080#1087' '#1083#1080#1089#1090#1072
        end
        item
          AutoSize = True
          Caption = #1056#1072#1079#1084#1077#1088' '#1058#1093#1064#1093#1044
        end
        item
          AutoSize = True
          Caption = #1062#1077#1085#1072' ('#1088#1091#1073')'
        end
        item
          AutoSize = True
          Caption = #1042#1088#1077#1084#1103' '#1087#1088#1086#1080#1079#1074#1086#1076#1089#1074#1090#1072' ('#1089#1077#1082')'
        end
        item
          AutoSize = True
          Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074' '#1076#1083#1103' '#1079#1072#1082#1072#1079#1072
        end
        item
          AutoSize = True
          Caption = #1044#1085#1077#1074#1085#1086#1081' '#1074#1099#1087#1091#1089#1082
        end
        item
          AutoSize = True
          Caption = #1044#1085#1077#1074#1085#1086#1081' '#1076#1086#1093#1086#1076
        end
        item
          AutoSize = True
          Caption = #1044#1086#1093#1086#1076' '#1079#1072' '#1091#1082#1072#1079#1072#1085#1086#1077' '#1074#1088#1077#1084#1103
        end
        item
          AutoSize = True
          Caption = #1059#1082#1072#1079#1072#1085#1086#1077' '#1074#1088#1077#1084#1103' ('#1084#1080#1085')'
        end
        item
          Caption = #1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100
        end>
      GridLines = True
      RowSelect = True
      TabOrder = 0
      ViewStyle = vsReport
    end
  end
  object Panel2: TPanel
    Left = 328
    Top = 56
    Width = 543
    Height = 224
    AutoSize = True
    BorderWidth = 30
    ParentShowHint = False
    ShowHint = False
    TabOrder = 1
    Visible = False
    object Label6: TLabel
      Left = 31
      Top = 87
      Width = 29
      Height = 13
      Caption = #1062#1077#1085#1072':'
    end
    object Label5: TLabel
      Left = 198
      Top = 87
      Width = 122
      Height = 13
      Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1076#1083#1103' '#1079#1072#1082#1072#1079#1072':'
    end
    object Label4: TLabel
      Left = 363
      Top = 87
      Width = 133
      Height = 13
      Caption = #1042#1088#1077#1084#1103' '#1055#1088#1086#1080#1079#1074#1086#1076#1089#1090#1074#1072'('#1089#1077#1082')'
    end
    object Label3: TLabel
      Left = 362
      Top = 31
      Width = 102
      Height = 13
      Caption = ' '#1056#1072#1079#1084#1077#1088' '#1058#1093#1064#1093#1044'('#1084#1084')'
    end
    object Label2: TLabel
      Left = 197
      Top = 31
      Width = 51
      Height = 13
      Caption = #1058#1080#1087' '#1083#1080#1089#1090#1072
    end
    object Label1: TLabel
      Left = 31
      Top = 31
      Width = 53
      Height = 13
      Caption = #1052#1072#1090#1077#1088#1080#1072#1083':'
    end
    object Label9: TLabel
      Left = 32
      Top = 136
      Width = 79
      Height = 13
      Caption = #1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100
    end
    object Edit3: TEdit
      Left = 199
      Top = 111
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 367
      Top = 111
      Width = 121
      Height = 21
      TabOrder = 1
    end
    object Edit1: TEdit
      Left = 31
      Top = 111
      Width = 121
      Height = 21
      TabOrder = 2
      OnChange = Edit1Change
    end
    object ComboBox3: TComboBox
      Left = 367
      Top = 55
      Width = 145
      Height = 21
      ItemHeight = 13
      TabOrder = 3
      OnChange = ComboBox3Change
    end
    object ComboBox2: TComboBox
      Left = 199
      Top = 55
      Width = 145
      Height = 21
      ItemHeight = 13
      TabOrder = 4
      OnChange = ComboBox2Change
    end
    object ComboBox1: TComboBox
      Left = 31
      Top = 55
      Width = 145
      Height = 21
      ItemHeight = 13
      TabOrder = 5
      OnChange = ComboBox1Change
      Items.Strings = (
        #1040#1083#1102#1084#1080#1085#1080#1081
        #1052#1077#1076#1100
        #1057#1090#1072#1083#1100
        #1051#1072#1090#1091#1085#1100)
    end
    object Button4: TButton
      Left = 261
      Top = 160
      Width = 89
      Height = 33
      Caption = #1054#1050
      TabOrder = 6
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 381
      Top = 160
      Width = 89
      Height = 33
      Caption = #1054#1090#1084#1077#1085#1072
      TabOrder = 7
      OnClick = Button5Click
    end
    object Edit6: TEdit
      Left = 32
      Top = 152
      Width = 121
      Height = 21
      TabOrder = 8
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 332
    Width = 982
    Height = 169
    Align = alBottom
    AutoSize = True
    BorderWidth = 20
    TabOrder = 2
    object Label8: TLabel
      Left = 743
      Top = 57
      Width = 130
      Height = 13
      Caption = '*'#1042#1088#1077#1084#1103' '#1088#1072#1073#1086#1090#1099' '#1079#1072#1074#1086#1076#1072' 8'#1095
    end
    object Label7: TLabel
      Left = 31
      Top = 95
      Width = 204
      Height = 13
      Caption = #1059#1082#1072#1078#1080#1090#1077' '#1074#1088#1077#1084#1103' '#1076#1083#1103' '#1087#1088#1086#1080#1079#1074#1086#1076#1089#1090#1074#1072'('#1084#1080#1085'):'
    end
    object load_bt: TButton
      Left = 168
      Top = 21
      Width = 177
      Height = 49
      Cursor = crHandPoint
      Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1087#1072#1088#1072#1084#1077#1090#1088#1099' '#1080#1079' '#1092#1072#1081#1083#1072
      TabOrder = 0
      OnClick = load_btClick
    end
    object Button3: TButton
      Left = 520
      Top = 21
      Width = 113
      Height = 49
      Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1074#1089#1102' '#1090#1072#1073#1083#1080#1094#1091
      TabOrder = 1
      OnClick = Button3Click
    end
    object Button2: TButton
      Left = 360
      Top = 21
      Width = 113
      Height = 49
      Caption = #1059#1076#1072#1083#1080#1090#1100' '#1083#1080#1089#1090
      TabOrder = 2
      OnClick = Button2Click
    end
    object Button1: TButton
      Left = 40
      Top = 21
      Width = 113
      Height = 49
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1083#1080#1089#1090
      TabOrder = 3
      OnClick = Button1Click
    end
    object Button6: TButton
      Left = 928
      Top = 48
      Width = 75
      Height = 25
      Caption = 'Button6'
      TabOrder = 4
      OnClick = Button6Click
    end
    object Edit4: TEdit
      Left = 34
      Top = 127
      Width = 121
      Height = 21
      TabOrder = 5
    end
    object Button7: TButton
      Left = 592
      Top = 104
      Width = 105
      Height = 25
      Caption = #1053#1072#1095#1072#1090#1100' '#1089#1086#1088#1090#1080#1088#1086#1074#1082#1091
      TabOrder = 6
      OnClick = Button7Click
    end
    object ComboBox4: TComboBox
      Left = 288
      Top = 104
      Width = 145
      Height = 21
      ItemHeight = 13
      TabOrder = 7
      Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1091#1089#1083#1086#1074#1080#1077
      Items.Strings = (
        #1052#1072#1090#1077#1088#1080#1072#1083
        #1058#1080#1087' '#1083#1080#1089#1090#1072
        #1056#1072#1079#1084#1077#1088
        #1062#1077#1085#1072
        #1042#1088#1077#1084#1103' '#1087#1088#1086#1080#1079#1074#1086#1076#1089#1090#1074#1072)
    end
    object ComboBox5: TComboBox
      Left = 440
      Top = 104
      Width = 145
      Height = 21
      ItemHeight = 13
      TabOrder = 8
      Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1082#1088#1080#1090#1077#1088#1080#1081
      Items.Strings = (
        #1087#1086' '#1074#1086#1079#1088#1072#1089#1090#1072#1085#1080#1102
        #1087#1086' '#1091#1073#1099#1074#1072#1085#1080#1102)
    end
    object Button8: TButton
      Left = 840
      Top = 104
      Width = 75
      Height = 25
      Caption = #1053#1072#1095#1072#1090#1100' '#1087#1086#1080#1089#1082
      TabOrder = 9
      OnClick = Button8Click
    end
    object Edit5: TEdit
      Left = 712
      Top = 104
      Width = 121
      Height = 21
      TabOrder = 10
      Text = #1055#1086#1080#1089#1082' '#1087#1086' '#1084#1072#1090#1077#1088#1080#1072#1083#1091
    end
    object Button9: TButton
      Left = 696
      Top = 32
      Width = 145
      Height = 25
      Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1087#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1077#1081
      TabOrder = 11
      OnClick = Button9Click
    end
  end
  object OpenDialog1: TOpenDialog
  end
end
